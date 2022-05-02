// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
class Solution
{
    public:
    //Function to return max value that can be put in knapsack of capacity W.
    int knapSack(int W, int wt[], int val[], int n)
    {
       vector<vector<int>> dp(n+1,vector<int>(W+1,-1));
       int y= knap(wt,val,W,n,dp);
    //    for(int i=0;i<=n;i++){
    //        for(int j=0;j<=W;j++){
    //            cout<<dp[i][j]<<" ";
    //        }
    //        cout<<"\n";
    //    }
       return y;
    }
    int knap(int wt[],int val[],int w,int i,vector<vector<int>> &dp){
    if(i==0||w==0) return 0;
    if(dp[i][w]!=-1)
        return dp[i][w];
    if(wt[i-1]>w)
        return knap(wt,val,w,i-1,dp);
    else
        {
            int ans1=knap(wt,val,w-wt[i-1],i-1,dp)+val[i-1];
            int ans2=knap(wt,val,w,i-1,dp);
            return dp[i][w]=max(ans1,ans2);
        }
    }
};

// { Driver Code Starts.

int main()
 {
    // #ifndef ONLINE_JUDGE
    //     freopen("input.txt", "r", stdin);freopen("output.txt", "w", stdout);
    // #endif
    //taking total testcases
    int t;
    cin>>t;
    while(t--)
    {
        //reading number of elements and weight
        int n, w;
        cin>>n>>w;

        int val[n];
        int wt[n];

        //inserting the values
        for(int i=0;i<n;i++)
            cin>>val[i];

        //inserting the weights
        for(int i=0;i<n;i++)
            cin>>wt[i];
        Solution ob;
        //calling method knapSack()
        cout<<ob.knapSack(w, wt, val, n)<<endl;

    }
	return 0;
}  // } Driver Code Ends