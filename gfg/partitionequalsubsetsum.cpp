// { Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
// User function Template for C++
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

class Solution{
public:
    int equalPartition(int N, int arr[])
    {
        ll sum = 0;
        ff(i,0,N-1){
            sum = sum + arr[i];
        }
        if((sum&1)==0){
            bool dp[N+1][sum/2+1],f=0;
            ff(i,0,N){
                ff(j,0,sum){
                    dp[i][j]=0;
                }
            }
            ff(i,0,N){
                ff(j,0,sum/2){
                    if(i==0){
                        dp[i][j]=0;
                        if(j==0)
                            dp[i][j]=1;
                        continue;
                    }
                    if(j==0){
                        dp[i][j]=1;
                    }
                    if(j==arr[i]){
                        dp[i][j]=1;
                        continue;
                    }
                    bool ans1=0,ans2=0;
                    if(j-arr[i]>=0){
                        ans1=dp[i-1][j-arr[i]];
                        ans2=dp[i-1][j];
                        dp[i][j]=ans1|ans2;
                    }
                    
                }
            }
            // ff(i,0,N){
            //     ff(j,0,sum/2){
            //         cout<<dp[i][j]<<" ";
            //     }
            //     cout<<"\n";
            // }
            f=dp[N][sum/2];
            if(f)
                return 1;
            else
                return 0;
        }
        else{
            return 0;
        }
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
        int N;
        cin>>N;
        int arr[N];
        for(int i = 0;i < N;i++)
            cin>>arr[i];
        
        Solution ob;
        if(ob.equalPartition(N, arr))
            cout<<"YES\n";
        else
            cout<<"NO\n";
    }
    return 0;
}  // } Driver Code Ends