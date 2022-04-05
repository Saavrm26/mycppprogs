#include <bits/stdc++.h>
//datatype snippets
#define ll long long
//stl snippets
#define vi vector<int>
#define vll vector<long long>
#define vpii vector<pair<int,int>>
#define vpll vector<pair<long long,long long>>
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
#define yes cout<<"YES\n"
#define no cout<<"NO\n"
#define fastIO ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
using namespace std;

int knapsack(int weight[],int value[],int knapsack_weight,int index){
    if(index==0||knapsack_weight==0) return 0;
    if(weight[index-1]>knapsack_weight)
        return knapsack(weight,value,knapsack_weight,index-1);
    else
        return maximum(
            knapsack(weight,value,knapsack_weight-weight[index-1],index-1)+value[index-1],
            knapsack(weight,value,knapsack_weight,index-1)
        );
}

int main(){
    #ifndef ONLINE_JUDGE
        system("ls output.txt && rm output.txt");freopen("input.txt", "r", stdin);system("touch output.txt");freopen("output.txt", "w", stdout);
    #endif
    fastIO;
    int n;
    cin>>n;
    int weight[n],value[n];
    for(int i=0;i<n;i++){cin>>weight[i];}
    for(int i=0;i<n;i++){cin>>value[i];}

}