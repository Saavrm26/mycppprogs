//Initial template for C++

#include<bits/stdc++.h> 
using namespace std; 

 // } Driver Code Ends
//User function template for C++
#define ll long long
//stl snippets
#define vi vector<int>
#define vll vector<long long>
#define vpii vector<pair<int,int>>
#define vpll vector<pair<long long,long long>>
#define vpll vector<pair<long long,long long>>
#define vvi vector<vector<int>>
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
#define fd(i,init,fin) for(int i=init;i>=fin;i--)
#define ffs(i,init,fin,step) for(int i=init;i<=fin;i=i+step)
#define fds(i,init,fin,step) for(int i=init;i>=fin;i=i-step)
class Solution{   
public:
    bool isSubsetSum(vector<int>arr, int sum){
        //TOPDOWN
        int n=arr.size();
        int dp[n+1][sum+1];
        
        // ff(i,0,n+1){
        //     ff(j,0,sum+1){
        //         dp[i][j]=-1;
        //     }
        // }
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
                    if(arr[i-1]==j){
                        dp[i][j]=1;
                    }
                    else if(arr[i-1]>j){
                        dp[i][j]=dp[i-1][j];
                    }
                    else{
                        if(dp[i-1][j]==1)
                            dp[i][j]=dp[i-1][j];
                        else if(dp[i-1][j-arr[i-1]]==1)
                            dp[i][j]=dp[i-1][j-arr[i-1]];
                        else
                            dp[i][j]=dp[i][j]=0;
                    }
                }
            }
        }

        ff(i,0,n){
            ff(j,0,sum){
                cout<<dp[i][j]<<" ";
            }
            cout<<"\n";
        }
        if(dp[n][sum]==1)
            return true;
        else
            return false;
    }
};

// { Driver Code Starts.
int main() 
{ 
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);freopen("output.txt", "w", stdout);
    #endif
    fastIO;
    int t;
    cin>>t;
    while(t--)
    {
        int N, sum;
        cin >> N;
        vector<int> arr(N);
        for(int i = 0; i < N; i++){
            cin >> arr[i];
        }
        cin >> sum;
        
        Solution ob;
        cout << ob.isSubsetSum(arr, sum) << endl;
    }
    return 0; 
} 
  // } Driver Code Ends

