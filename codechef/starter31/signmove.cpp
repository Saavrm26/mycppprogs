#include <bits/stdc++.h>
//datatype snippets
#define ll long long
//vector snippets
#define vi vector<int>
#define vll vector<long long>
#define eb emplace_back
//function snippets
ll minimum(ll a,ll b){if(a<b) return a;else return b;}
ll maximum(ll a,ll b){if(a>b) return a;else return b;}
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        if(n&1){
            cout<<((n+1)/2)*-1<<"\n";
        }
        else{
            cout<<n/2<<"\n";
        }
    }
}