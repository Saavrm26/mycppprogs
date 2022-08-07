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

int N=1e6;
vector<bool> is_prime(N+1, true);

void solve();
int main(){
    is_prime[0] = is_prime[1] = false;
    for (ll i = 2; i <= N; i++) {
        if (is_prime[i] && (long long)i * i <= N) {
            for (ll j = i * i; j <= N; j += i)
                is_prime[j] = false;
        }
    }
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
    ini(n) ini(e)
    invll(v,n);
    vb mark(n);
    ll ans=0;
    vpll vec(n);
    fb(i,n-1,0){
        if(!mark[i]){
            ll idx=i;
            bool begin=0;
            ll before=0,after=0,curr=-1;
            while(idx>=0){
                mark[idx]=1;
                if(!begin){
                    if(v[idx]==1){
                        before+=1;
                    }
                    else{
                        if(is_prime[v[idx]]){
                            begin=1;
                            curr=idx;
                        }
                        else{
                            break;
                        }
                    }
                }
                else{
                    if(v[idx]==1){
                        after+=1;
                        if(idx==0){
                            vec[curr]=mp(before,after);
                        }
                    }
                    else{
                        // agar 2 or more prime hai then
                        if(is_prime[v[idx]]){
                            vec[curr]=mp(before,after);
                            before=after;
                            after=0;
                            curr=idx;

                        }
                        else if(idx==0){
                            vec[curr]=mp(before,after);
                        }
                        else{
                            break;
                        }
                    }
                }
                idx-=e;
                if(idx<0){
                    if(curr!=-1)
                        vec[curr]=mp(before,after);
                }
            }
        }
    }
    ffa(i,vec){
        if(i!=mp(0*1LL,0*1LL)){
            ans+=(i.fi+1)*(i.se+1)-1;
        }

    }
    cout<<ans<<"\n";
}