#include <bits/stdc++.h>
using namespace std;

//datatype snippets
#define ll long long
//vector snippets
#define vi vector<int>
#define vll vector<long long>
#define eb emplace_back
//fucntion snippets
ll minimum(ll a,ll b){if(a<b) return a;else return b;}
ll maximum(ll a,ll b){if(a>b) return a;else return b;}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        ll n,x;
        cin>>n>>x; 
        vi vec(n+1);
        vll prefix(n+1);
        vec[0]=0;
        prefix[0]=0;
        for(int i=1;i<=n;i++){
            cin>>vec[i];
            prefix[i]=prefix[i-1]+vec[i];
        }
        vll maxi_vec;
        maxi_vec.push_back(0);
        int l=0;
        ll overall_maxi=0;
        for(int i=1;i<=n;i++){
            ll maxi=INT64_MIN;
            for(int j=0;j<=n-i;j++){
                if(j==0){
                    if(prefix[i]>maxi){
                        maxi=prefix[i];
                    }
                }
                else{
                    if(prefix[j+i]-prefix[j]>maxi){
                        maxi=prefix[j+i]-prefix[j];
                    }
                }
            }
            overall_maxi=maximum(overall_maxi,maxi);
            if(overall_maxi==maxi)
                l=i;
            maxi_vec.push_back(maxi);
        }
        // for(int k=0;k<=n;k++){
        //     if(k<=l){
        //         cout<<overall_maxi+k*x<<" ";
        //         if(k==l)
        //             overall_maxi=overall_maxi+k*x;
        //     }
        //     else{
        //         overall_maxi=maximum(maxi_vec[k]+(k)*x,(overall_maxi));
        //         cout<<overall_maxi<<" ";
        //     }
        // }
        // cout<<"\n";
        for(int k=0;k<=n;k++){
            ll ans=0;
            for(int j=0;j<=n;j++){
                ans=maximum(ans,maxi_vec[j]+minimum(k,j)*x);
            }
            cout<<ans<<" ";
        }
        cout<<"\n";
    }
}