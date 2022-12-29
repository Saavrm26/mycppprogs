#include <bits/stdc++.h>
using namespace std;

//datatype snippets
typedef long long ll;
//stl snippets
typedef vector<bool> vb;
typedef vector<int> vi;
typedef vector<long long> vll;
typedef vector<string> vs;
typedef vector<pair<int,int>> vpii;
typedef vector<pair<char,int>> vpci;
typedef vector<pair<long long,long long>> vpll;
typedef vector<vector<int>> vvi;
typedef vector<vector<bool>> vvb;
typedef vector<vector<long long>> vvll;
typedef vector<vector<pair<int,int>>> vvpii;
typedef vector<vector<pair<long long,long long>>> vvpll;
typedef queue<int> qi;
typedef deque<int> dqi;
typedef deque<long long> dqll;
typedef queue<pair<int,int>> qpii;
typedef queue<pair<long long,long long>> qpll;
typedef deque<pair<int,int>> dqpii;
typedef deque<pair<long long,long long>> dqpll;
typedef pair<int,int> pii;
typedef set<int> si;
typedef set<ll> sll;
typedef map<int,int> mii;
typedef map<long long,long long> mll;
typedef map<int,pair<int,int>> mipii;
#define all(v) v.begin(), v.end()
#define eb emplace_back
#define mp make_pair
#define lb lower_bound
#define ub upper_bound
#define fi first
#define se second
//io snippets
#define yes cout<<"YES\n"
#define no cout<<"NO\n"
#define fastIO ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define ini(x) int x;cin>>x;
#define inll(x) ll x;cin>>x;
#define ins(x) string x;cin>>x;
#define invi(x,n) vi x(n);ff(i,0,n-1) cin>>x[i];
#define invll(x,n) vll x(n);ff(i,0,n-1) cin>>x[i];
// loop snippets
#define ff(i,init,fin) for(int i=init;i<=fin;i++)
#define fb(i,init,fin) for(int i=init;i>=fin;i--)
#define ffs(i,init,fin,step) for(int i=init;i<=fin;i=i+step)
#define fbs(i,init,fin,step) for(int i=init;i>=fin;i=i-step)
#define ffit(it,x) for(auto it=x.begin();it!=x.end();it++)
#define ffa(it,x) for(auto it:x)
//bit snippets
#define popcnt __builtin_popcount
//function snippets
ll minimum(ll a,ll b){if(a<b) return a;else return b;}
ll maximum(ll a,ll b){if(a>b) return a;else return b;}
ll absolute(ll a){if(a>=0)return a;else return a*-1;}
ll lcm (ll a, ll b) {return a / gcd(a, b) * b;}
ll mod_sub(ll a,ll b){ll mod=1e9+7;return ((a-b)%mod + mod) % mod;}
ll binpow(ll a, ll b) {ll res = 1;while (b > 0) {if (b & 1) res = res * a;a = a * a;b >>= 1;}return res;}
#define trace1d(arr,n) cout<<#arr<<"\n";for(int i=0;i<=n;i++)cout<<(arr[i])<<" ";cout<<"\n";
#define trace2d(arr,n,m) cout<<#arr<<"\n";for(int i=0;i<=n;i++){for(int j=0;j<=m;j++){cout<<(arr[i][j])<<" ";}cout<<"\n";}
#define trace(x) cout<<#x<<" "<<x<<"\n";


// Questions to ask before submitting any code on OJ
// Q1. Is my approach handling all the cases ? Think of some edge cases
// Q2. How complicated is my approach
// Q3. Will your implementation be a barrier?
// Remember:
// Competition is with yourself

void solve();
int main(){
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);freopen("output.txt", "w", stdout);
    #endif
    fastIO;
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}
void solve(){
    ini(n)
    invi(a,n)
    invi(b,n)
    invi(c,n)
    vpii A(n),B(n);
    ff(i,0,n-1){
        A[i]=mp(a[i],i);
        B[i]=mp(b[i],i);
    }
    ll mod=1e9+7;
    sort(all(A));
    sort(all(B));
    si s;
    ff(i,0,n-1){
        if(c[i]!=0){
            int to_find=b[i];
            if(c[i]==a[i]){
                to_find=b[i];
            }
            int idx=i;
            s.insert(to_find);
            while(s.size()<n){
                if(s.find(a[idx])==s.end()||s.find(b[idx])==s.end()){
                    if(to_find==a[idx]){
                        to_find=b[idx];
                        s.insert(to_find);
                        idx=(*lb(all(A),mp(to_find,0))).se;
                    }
                    else{
                        to_find=a[idx];
                        s.insert(to_find);
                        idx=(*lb(all(B),mp(to_find,0))).se;
                    }
                }
                else{
                    break;
                }
            }
        }
    }
    ll ans=1;
    ff(idx,0,n-1){
        int i=idx;
        while(s.size()<n){
            if(a[i]!=b[i]){
                auto it1=s.find(a[i]);
                auto it2=s.find(b[i]);
                if(it1==s.end()||it2==s.end()){
                    if(it1==s.end()&&it2==s.end()){
                        s.insert(a[i]);
                        s.insert(b[i]);
                        ans*=2;
                        ans=ans%mod;
                        i=(*(lb(all(A),mp(b[i],0)))).se;
                    }
                    else{
                        if(it1==s.end()){
                            //a[i] is not present
                            s.insert(a[i]);
                            auto itr=(lb(all(B),mp(a[i],0)));
                            if(itr!=B.end())
                                i=(*itr).se;
                            else break;
                        }
                        else{
                            //b[i] is not present
                            s.insert(b[i]);
                            auto itr=(lb(all(A),mp(b[i],0)));
                            if(itr!=A.end())
                                i=(*itr).se;
                            else break;
                        }
                    }
                }
                else{
                    break;
                }
            }
            else{
                s.insert(a[i]);break;
            }

        }
    }
    cout<<ans<<"\n";
}