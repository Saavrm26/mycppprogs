#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
        ll n,q;
        cin>>n>>q;
        ll price[n];
        for(int i=0; i<n; i++){
            cin>>price[i];
        }
        vector<ll> money(n);
        money[0]=price[0];
        for(int i=1; i<n; i++){
            money[i]=money[i+1]+price[i];
        }
        while(q--){
            ll pos, m;
            cin>>pos>>m;
            // for(int i=pos-1; i<n; i++){
            //     money+=price[i];
            //     if(money<=m){
            //         ans++;
            //     }else{
            //         break;
            //     }
            // }
            if(pos!=1)
                cout<<lower_bound(money.begin(),money.end(),m+money[pos-1])-(money.begin()+(pos))<<endl;
            else
                cout<<lower_bound(money.begin(),money.end(),m+money[pos-1])-(money.begin())+1<<"\n";
        }

}