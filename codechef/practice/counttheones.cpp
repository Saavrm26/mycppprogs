#include <bits/stdc++.h>
using namespace std;

#define vi vector<int>
#define ll long long
#define vll vector<long long>


int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    vll fact_lookup(51);
    fact_lookup[0]=1;
    fact_lookup[1]=1;
    for(ll i=2;i<=50;i++){
        fact_lookup[i]=fact_lookup[i-1]*i;
    }
    int t;
    cin>>t;
    while(t--){
        ll n,k;
        cin>>n>>k;
        ll r=1,ans=0,sum=0;
        ll temp=(fact_lookup[n]/(fact_lookup[r]*fact_lookup[n-r]));
        while(sum+temp<k){
            sum += temp;
            ans += temp*r;
            r++; 
            temp=(fact_lookup[n]/(fact_lookup[r]*fact_lookup[n-r]));
        }
        ans += (k-sum)*r;
        cout<<ans<<"\n";
    }
}