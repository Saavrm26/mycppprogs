#include <bits/stdc++.h>
using namespace std;

#define vi vector<int>
#define ll long long
ll ncr(ll n,ll r){
    ll numerator=1,denominator=1;
    for(int i=n-r+1;i<=n;i++)
        numerator *=i;
    for(int i=1;i<=r;i++)
        denominator *= i;
    return (numerator/denominator);
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        ll n,k;
        cin>>n>>k;
        ll r=1,ans=0,sum=0;
        ll temp=ncr(n,r);
        while(sum+temp<=k){
            sum += temp;
            ans += temp*r;
            r++; 
            temp=ncr(n,r);
        }
        ans += (k-sum)*r;
        cout<<ans<<"\n";
    }
}