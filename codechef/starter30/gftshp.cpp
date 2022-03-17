#include <bits/stdc++.h>
using namespace std;

#define vi vector<int>
#define ll long long
#define vll vector<long long>
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        ll n,k;
        cin>>n>>k;
        vll items(n),sum(n);
        ll maxi=0;
        for(int i=0;i<n;i++){
            cin>>items[i];
            if(items[i]>maxi){
                maxi=items[i];
            }
        }
        sort(items.begin(),items.end());
        sum[0]=items[0];
        for(int i=1;i<n;i++){
            sum[i]=sum[i-1]+items[i];
        }
        if(k>=sum[n-1]){
            cout<<n<<"\n";
        }
        else{
            if(k>=sum[0]){
                if(n!=1){
                    auto it=upper_bound(sum.begin(),sum.end(),k);
                    ll new_sum= *(it-1) + ((*it-*(it-1))%2==0?(*it-*(it-1))/2:((*it-*(it-1))/2 + 1));
                    if(new_sum<=k){
                        cout<<(it-sum.begin()+1)<<"\n";
                    }
                    else{
                        cout<<(it-sum.begin())<<"\n";
                    }
                }
                else{
                    cout<<1<<"\n";
                }
            }
            else{
                ll new_sum=(items[0])%2==0?(items[0])/2:((items[0])/2 + 1);
                if(k>=new_sum){
                    cout<<1<<"\n";
                }
                else{
                    cout<<0<<"\n";
                }
            }
        }
    }
}