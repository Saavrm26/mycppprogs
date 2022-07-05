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
typedef queue<int> qi;
typedef queue<pair<int,int>> qpii;
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
bool isValid(int j,int i,int n,int m){
    if(i<0||j<0||j>m-1||i>n-1) return 0;
    return 1;
}
void solve(){
    ini(n) ini(m)
    vvi adj(n+1,vi(m+1));
    vvb vis(n+1,vb(m+1));
    vvi lvl(n+1,vi(m+1));
    vpii move={{1,0},{1,1},{0,1},{-1,0},{1,-1},{-1,1},{-1,-1},{0,-1}};
    int maxi=INT32_MIN;
    ff(i,0,n-1){
        ff(j,0,m-1){
            cin>>adj[i][j];
            maxi=max(adj[i][j],maxi);
        }
    }
    qpii q;
    ff(i,0,n-1){
        ff(j,0,m-1){
            if(adj[i][j]==maxi) q.push(mp(i,j));
        }
    }
    int ans=0;
    while(!q.empty()){
        auto par=q.front();
        q.pop();
        ffa(i,move){
            if(!isValid(par.se+i.se,par.fi+i.fi,n,m)) continue;
            if(vis[i.fi][i.se]) continue;
            vis[i.fi][i.se]=1;
            lvl[par.fi+i.fi][par.se+i.se]=lvl[par.fi][par.se]+1;
            ans=max(lvl[par.fi][par.se],ans);
        }
    }
    cout<<ans<<"\n";
}