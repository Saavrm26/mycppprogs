#include <bits/stdc++.h>
using namespace std;

#define vi vector<int>
#define vll vector<long long>
#define ll long long
#define vpll vector<pair<long long , long long>>
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll n,m;
    cin>>n>>m;
    vll sub_wht(n);
    for(int i=0;i<n;i++){
        cin>>sub_wht[i];
    }
    while(m--){
        ll reac_id,pro_cnt;
        cin>>reac_id>>pro_cnt;
        vpll products(pro_cnt);
        for(ll i=0;i<pro_cnt;i++){
            ll prod_wht_mult , prod_id;
            cin>>prod_wht_mult>>prod_id;//products[i].first : wht , products[i].second : sub_id
            sub_wht[prod_id-1] += (prod_wht_mult*sub_wht[reac_id-1])%((ll)(1e9+7));
            sub_wht[prod_id-1]=(sub_wht[prod_id-1])%((ll)(1e9+7));
        }
        sub_wht[reac_id-1]=0;
    }
    for(int i=0;i<n;i++){
        cout<<(sub_wht[i])%((ll)(1e9+7))<<"\n";
    }
}