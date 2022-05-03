// { Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
// User function Template for C++

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

class Solution{
public:
    int dp[1001][1001];
    int knapSack(int N, int W, int val[], int wt[])
    {
        memset(dp,-1,sizeof(dp));
        return unboundedKnap(N,W,val,wt);
    }
    int unboundedKnap(int i,int W,int val[],int wt[]){
        if(i==1){
            // cout<<"W="<<W<<" i="<<i<<" base: "<<((W/val[0])*val[0])<<"\n";
            return (W/wt[0])*val[0];
        }
        if(dp[i][W]!=-1){
            // cout<<"W="<<W<<" i="<<i<<" dp matrix returned: "<<dp[i][W]<<"\n";
            return dp[i][W];
        }
        int ans1=unboundedKnap(i-1,W,val,wt);
        // cout<<"W="<<W<<" i="<<i<<" ans1: "<<ans1<<"\n";
        int ans2=0;
        if(wt[i-1]<=W){
            ans2=unboundedKnap(i,W-wt[i-1],val,wt)+val[i-1];
            // cout<<"W="<<W<<" i="<<i<<" ans2: "<<ans2<<"\n";
        }
        return dp[i][W]=max(ans1,ans2);
    }
};

// { Driver Code Starts.

int main(){
   #ifndef ONLINE_JUDGE
       freopen("input.txt", "r", stdin);freopen("output.txt", "w", stdout);
   #endif
    int t;
    cin>>t;
    while(t--){
        int N, W;
        cin>>N>>W;
        int val[N], wt[N];
        for(int i = 0;i < N;i++)
            cin>>val[i];
        for(int i = 0;i < N;i++)
            cin>>wt[i];

        Solution ob;
        cout<<ob.knapSack(N, W, val, wt)<<endl;
    }
    return 0;
}  // } Driver Code Ends