// https://www.geeksforgeeks.org/fractional-knapsack-problem/
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

struct Items{int value;int weight;double fracVal;};
bool check(Items i1, Items i2){
    return i1.fracVal>i2.fracVal;
}
int main(){
    #ifndef ONLINE_JUDGE
        system("ls output.txt && rm output.txt");freopen("input.txt", "r", stdin);system("touch output.txt");freopen("output.txt", "w", stdout);
    #endif
    fastIO;
    int w;
    cin>>w;
    int n;
    cin>>n;
    cout<<setprecision(2)<<fixed;
    Items arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i].value>>arr[i].weight;
        arr[i].fracVal=double(arr[i].value)/arr[i].weight;
    }
    sort(arr,arr+n,check);
    double cost=0;
    for(int i=0;i<n;i++){
        if(arr[i].weight>w){
            cost += arr[i].fracVal * w;
            cout<<cost<<"\n";
            break;
        }
        else{
            w -= arr[i].weight;
            cost+= arr[i].value;
        }
    }   
}