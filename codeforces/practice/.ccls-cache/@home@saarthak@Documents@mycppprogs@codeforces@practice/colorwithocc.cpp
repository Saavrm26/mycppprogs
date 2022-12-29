#include <bits/stdc++.h>
using namespace std;

//datatype snippets
typedef long long ll;
//stl snippets
typedef vector<bool> vb;
typedef vector<int> vi;
typedef vector<long long> vll;
typedef vector<string> vs;
typedef vector<pair<string,int>> vpsi;
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

string cusstr(int l,int r,string str){
    string s="";
    ff(i,l,r){
        s+=str[i];
    }
    return s;
}

int bsearch(vpsi vec,string str){
    int n=vec.size();
    auto it =lb(all(vec),mp(str,0));
    if((*it).fi==str){
        return (*it).se;
    }
    return -1;
}

void solve(){
    ins(s)
    ini(n)
    vpsi vec(n);
    ff(i,0,n-1){
        cin>>vec[i].fi;
        vec[i].se=i;
    }
    sort(all(vec));
    int ans=0;
    int p=s.size();
    vpii ranges;
    //index of the last element in the maximum range including index 0
    int x=0;

    bool ok=0;
    // first section
    fb(i,p-1,0){
        x=i;
        string str = cusstr(0, i, s);
        int idx=bsearch(vec,str);
        if (idx!=-1)
        {
            ranges.eb(idx+1, 1);
            ans++;
            ok=1;
            break;
        }
    }
    if(!ok){cout<<-1<<'\n';return;}

    while(x<p-1){
        ok=false;
        fb(k,p-1,x+1){
            string str = cusstr(x + 1, k, s);
            int id=bsearch(vec,str);
            if(id!=-1){
                ranges.eb(id+1, x+2);
                ans++;
                ok=1;
                x=k;
            }
            else{
                fb(i, x, 0)
                {
                    str = s[i] + str;
                    int idx=bsearch(vec,str);
                    if (idx!=-1)
                    {
                        ranges.eb(idx+1, i + 1);
                        ans++;
                        ok=1;
                        x=k;
                        break;
                    }
                }
            }
            if(ok) break;
        }
        if(!ok){cout<<-1<<'\n';return;}
    }
    cout<<ans<<"\n";
    ff(i,0,int(ranges.size())-1){
        cout<<ranges[i].fi<<" "<<ranges[i].se<<"\n";
    }
}