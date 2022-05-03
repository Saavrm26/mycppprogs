#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll dp[1001][1001];
ll knapsack(ll n, ll w, ll val[], ll wei[]){
    if(dp[n][w]!=-1)return dp[n][w];
    ll ans1, ans2;
    if(n==0) return dp[n][w]=0;
    if(w<wei[n-1]){
        return dp[n][w]= knapsack(n-1, w, val, wei);
    }
    else{
        ans1= knapsack(n-1, w-wei[n-1], val, wei) + val[n-1];
        ans2= knapsack(n-1, w, val, wei);
        return dp[n][w]=max(ans1, ans2);
    }
}

int main(){
//    #ifndef ONLINE_JUDGE
//        freopen("input.txt", "r", stdin);freopen("output.txt", "w", stdout);
//    #endif
    memset(dp, -1, sizeof(dp));
    ll n, w;
    cin>>n>>w;
    ll val[n], wei[n];
    for(int i=0; i<n; i++){
        cin>>wei[i]>>val[i];
    }
    // for(int i=0; i<n; i++){
    //     cin>>wei[i];
    // }
    cout<<knapsack(n, w, val, wei);
return 0;
}