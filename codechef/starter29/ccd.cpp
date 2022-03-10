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
        vll diff_arr(n);
        vll b_sum(n);
        diff_arr[0]=(ll)(a[0]-b[0]);
        for(ll i=1;i<n;i++){
            if((i+1)%2==0){
                if(a[i]<b[i])
                    diff_arr[i] += diff_arr[i-1] - (ll)(b[i]-a[i]);
                else
                    diff_arr[i] += diff_arr[i-1] -(ll)(('z'-a[i]+b[i] - 'a' +1));
            }
            else{
                if(a[i]<b[i])
                    diff_arr[i] += diff_arr[i-1] + (ll)(b[i]-a[i]);
                else
                    diff_arr[i] += diff_arr[i-1] + (ll)(('z'-a[i]+b[i]-'a'+1));
            }
        }
        while(q--){
            int l,r;
            cin>>l>>r;
            if(l==r){
                cout<<"yes"<<endl;
            }
            else if(l!=1)
                if(diff_arr[r-1]-diff_arr[l-2]==0)
                    cout<<"Yes"<<endl;
                else{
                    cout<<"No"<<endl;
                }
            else{
                if(diff_arr[r-1]==0)
                    cout<<"Yes"<<endl;
                else
                    cout<<"No"<<endl;
                
            }
        }
    }
}