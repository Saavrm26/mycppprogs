#include <bits/stdc++.h>
using namespace std;

//datatype snippets
typedef long long ll;
//stl snippets
typedef vector<int> vi;
typedef vector<long long> vll;
typedef vector<pair<int,int>> vpii;
typedef vector<pair<long long,long long>> vpll;
typedef vector<vector<int>> vvi;
typedef vector<vector<long long>> vvll;
typedef set<int> si;
typedef set<ll> sll;
typedef map<int,int> mii;
typedef map<long long,long long> mll;
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
#define popcnt __builtin_popcount
//function snippets
ll minimum(ll a,ll b){if(a<b) return a;else return b;}
ll maximum(ll a,ll b){if(a>b) return a;else return b;}
ll absolute(ll a){if(a>=0)return a;else return a*-1;}
ll lcm (ll a, ll b) {return a / gcd(a, b) * b;}
ll mod_sub(ll a,ll b){ll mod=1e9+7;return ((a-b)%mod + mod) % mod;}
ll binpow(ll a, ll b) {ll res = 1;while (b > 0) {if (b & 1) res = res * a;a = a * a;b >>= 1;}return res;}

vvi dp(1001,vi(1001,-1));
int coinchangerecursive(ll sum,int i,vi v){
    if(sum==0){
        return 1;
    }
    if(i==0)return 0;
    if(dp[i][sum]!=-1)
        return dp[i][sum];
    int ans1=coinchangerecursive(sum,i-1,v);
    int ans2=0;
    if(v[i-1]<=sum){
        ans2=coinchangerecursive(sum-v[i-1],i,v);
    }
    return dp[i][sum]=ans1+ans2;
}
int coinchangeiterative(ll sum,int n,vi v){
    vvi dp(1001,vi(1001,-1));
    ff(i,0,n){
        ff(j,0,sum){
            if(i==0||j==0){
                if(i==0) dp[i][j]=0;
                if(j==0) dp[i][j]=1;
            }
            else{
                int ans1=dp[i-1][sum];
                int ans2=0;
                if(v[i-1]<=sum){
                    ans2=dp[i][sum-v[i-1]];
                }
                dp[i][sum]=ans1+ans2;
            }
        }
    }
}

int main(){
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);freopen("output.txt", "w", stdout);
    #endif
    fastIO;
    // int n;cin >> n;
    // vi v(n);ff(i,0,n) cin>>v[i];
    // int sum;cin >> sum;
    ini(n)
    invi(v,n)
    inll(sum)
    cout<<coinchangerecursive(sum,n,v)<<"\n";
    cout<<coinchangeiterative(sum,n,v)<<"\n";
}