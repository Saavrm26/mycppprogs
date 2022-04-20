// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;
//datatype snippets
#define ll long long
//stl snippets
#define vi vector<int>
#define vll vector<long long>
#define vpii vector<pair<int,int>>
#define vpll vector<pair<long long,long long>>
#define vvi vector<vector<int>>
#define vvll vector<vector<long long>>
#define si set<int>
#define mii map<int,int>
#define mll map<long long,long long>
#define eb emplace_back
#define mp make_pair
#define fi first
#define se second
//function snippets
ll minimum(ll a,ll b){if(a<b) return a;else return b;}
ll maximum(ll a,ll b){if(a>b) return a;else return b;}
ll absolute(ll a){if(a>=0)return a;else return a*-1;}
//io snippets
#define yes cout<<"YES\n"
#define no cout<<"NO\n"
#define fastIO ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
// loop snippets
#define ff(i,init,fin) for(int i=init;i<=fin;i++)
#define fb(i,init,fin) for(int i=init;i>=fin;i--)
#define ffs(i,init,fin,step) for(int i=init;i<=fin;i=i+step)
#define fbs(i,init,fin,step) for(int i=init;i>=fin;i=i-step)
 // } Driver Code Ends
class Solution{
	public:
	int perfectSum(int arr[], int n, int sum)
	{
        long long mod=1e7+7;
        long long dp[n+1][sum+1];
        for(int i=0;i<=n;i++){
            for(int j=0;j<=sum;j++){
                dp[i][j]=0;
            }
        }
        for(int i=0;i<=n;i++){
            for(int j=0;j<=sum;j++){
                if((i==n)&&j==0){
                    dp[i][j]=1;
                }
                if(i>0){
                    if(arr[i-1]==j){
                        dp[i][j]=1;
                    }
                    dp[i][j]+=(dp[i-1][j])%mod+((j-arr[i-1]>=0)?dp[i-1][j-arr[i-1]]:0)%mod;
                    dp[i][j]%=mod;
                }
            }
        }
        // ff(i,0,n){
        //     ff(j,0,sum){
        //         cout<<dp[i][j]<<" ";
        //     }
        //     cout<<"\n";
        // }
        return dp[n][sum];
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
        int n, sum;
        cin >> n >> sum;
        int a[n];
        for(int i = 0; i < n; i++)
        	cin >> a[i];
	    Solution ob;
	    cout << ob.perfectSum(a, n, sum) << "\n";
    }
    return 0;
}
  // } Driver Code Ends