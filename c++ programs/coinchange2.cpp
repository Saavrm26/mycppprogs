// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution{
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

ll mod_sub(ll a,ll b){ll mod=1e9+7;return ((a-b)%mod + mod) % mod;}
ll binpow(ll a, ll b) {ll res = 1;while (b > 0) {if (b & 1) res = res * a;a = a * a;b >>= 1;}return res;}
	public:
	int minCoins(int coins[], int M, int V)
	{
	    vvll dp(M+1,vll(V+1,-1));
        ll y=coinchange(V,M,coins,dp);
        if(y>=INT32_MAX){
            return -1;
        }
        else
        {
            return y;
        }

	}
	ll coinchange(ll sum,int i,int v[],vvll &dp){
    if(sum==0){
        return 0;
    }
    if(i==0)return INT32_MAX;
    if(dp[i][sum]!=-1){
        cout<<"dp returned "<<dp[i][sum]<<"\n";
        return (ll)(dp[i][sum]);
    }
    ll ans1=coinchange(sum,i-1,v,dp);
    // cout<<"i is "<<i<<" sum is "<<sum<<" ans1 is "<<ans1<<"\n";
    ll ans2=INT32_MAX;
    if(v[i-1]<=sum){
        ans2=coinchange(sum-v[i-1],i,v,dp)+1;
    }
    // cout<<"i is "<<i<<" sum is "<<sum<<" ans2 is "<<ans2<<"\n";
    return dp[i][sum]=min(ans1,ans2);
}

};

// { Driver Code Starts.
int main()
{
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);freopen("output.txt", "w", stdout);
    #endif

   	int t;
    cin >> t;
    while (t--)
    {
        int v, m;
        cin >> v >> m;

        int coins[m];
        for(int i = 0; i < m; i++)
        	cin >> coins[i];


	    Solution ob;
	    cout << ob.minCoins(coins, m, v) << "\n";

    }
    return 0;
}
  // } Driver Code Ends