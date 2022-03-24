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
    vll pow_of_2(31);
    for(int i=0;i<=30;i++){
        pow_of_2[i]=1<<i;
    }
    int t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        vll a(n);
        map<ll,ll> m;
        for(int i=0;i<n;i++){
            cin>>a[i];
            auto it=(lower_bound(pow_of_2.begin(),pow_of_2.end() , a[i]));
            ll x= (*it==a[i]?*it:*(it-1))&a[i];
            m[x]++;
        }
        ll ans=0;
        for(auto it=m.begin();it!=m.end();it++){
            ll x = (*it).second;
            ans += (x*(x-1))/2;
        }
        cout<<ans<<"\n";
    }
}