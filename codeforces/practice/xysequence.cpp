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
        ll n,b,x,y;
        cin>>n>>b>>x>>y;
        vll vec(n+1,0);
        ll sum=0;
        for(int i=1;i<=n;i++){
            if(vec[i-1]+x<=b)
                vec[i]=vec[i-1]+x;
            else
                vec[i]=vec[i-1]-y;
            sum += vec[i];
        }
        cout<<sum<<"\n";
    }
}