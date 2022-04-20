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
 typedef map<int,int> mii;
 typedef map<long long,long long> mll;
 #define eb emplace_back
 #define mp make_pair
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
 //function snippets
 ll minimum(ll a,ll b){if(a<b) return a;else return b;}
 ll maximum(ll a,ll b){if(a>b) return a;else return b;}
 ll absolute(ll a){if(a>=0)return a;else return a*-1;}
 ll lcm (ll a, ll b) {return a / gcd(a, b) * b;}
  
  public:
	int minDifference(int arr[], int n)  { 
	    ll sum =0;
        ff(i,0,n-1){
            sum+=arr[i];
        }
        bool dp[n+1][sum+1];
        ff(i,0,n){
            ff(j,0,sum){
                dp[i][j]=0;
            }
        }
        ff(i,0,n){
            ff(j,0,sum){
                if(i==0){
                    dp[i][j]=0;
                    if(j==0)
                        dp[i][j]=1;
                    continue;
                }
                if(j==0){
                    dp[i][j]=1;
                    continue;
                }
                if(i>0){
                    if(arr[i-1]>j){
                        dp[i][j]=dp[i-1][j];
                    }
                    else{
                        bool a1=0,a2=0;
                        if((j-arr[i-1])>=0)
                            a1=dp[i-1][j-arr[i-1]];
                        a2=dp[i-1][j];
                        dp[i][j]=a1|a2;
                    }
                }
            }
        }
        ll ans=INT32_MAX;
        ff(i,0,sum){
            if(dp[n][i]==1){
                ans=minimum(ans,absolute((sum-i)-i));
            }
        }
        return ans;
	} 
};


// { Driver Code Starts.
int main() 
{
//    #ifndef ONLINE_JUDGE
//        freopen("input.txt", "r", stdin);freopen("output.txt", "w", stdout);
//    #endif   
   	int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;

        int a[n];
        for(int i = 0; i < n; i++)
        	cin >> a[i];
	    Solution ob;
	    cout << ob.minDifference(a, n) << "\n";
	     
    }
    return 0;
}  // } Driver Code Ends