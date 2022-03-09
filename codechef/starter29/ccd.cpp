#include <bits/stdc++.h>
using namespace std;

#define vi vector<int>
#define ll long long
#define vll vector<long long>
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll t;
    cin>>t;
    while(t--){
        ll n,q;
        cin>>n>>q;
        string a,b;
        cin>>a>>b;
        vll a_sum(n);
        vll b_sum(n);
        a_sum[0]=(ll)(a[0])-96;
        b_sum[0]=(ll)(b[0])-96;
        for(ll i=1;i<n;i++){
            a_sum[i] += a_sum[i-1] +(ll)(a[i])-96;
            b_sum[i] += b_sum[i-1] +(ll)(b[i])-96;
        }
        while(q--){
            
        }
    }
}