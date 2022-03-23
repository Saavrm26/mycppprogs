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
    ll n;
    cin>>n;
    vll ans;
    for(ll i=1;i<=n;i++){
        if(i<=3){
            if(i==1)
                ans.eb(0);
            else if(i==2)
                ans.eb(6);
            else
                ans.eb(28);
        }
        else{
            ll a = ((i*i)*(i*i-1))/2 - 4*(i-1)*(i-2);
            ans.eb(a);
        }
    }
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<"\n";
    }
}