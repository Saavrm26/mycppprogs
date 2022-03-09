#include <bits/stdc++.h>
using namespace std;

#define vi vector<int>
#define ll long long
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vi vec(n);
        
        for(int i=0;i<n;i++){
            cin>>vec[i];
            if(vec[i]<0) vec[i]= vec[i]*-1;
        }
        int mini_even=vec[0],maxi_odd=vec[1];
        ll alt_sum=0;
        for(int i=0;i<n;i++){
            if(i%2==0){
                if(vec[i]<mini_even)
                    mini_even=vec[i];
                alt_sum += vec[i];
            }
            else{
                if(vec[i]>maxi_odd){
                    maxi_odd=vec[i];
                }
                alt_sum -= vec[i];
            }
        }
        if(maxi_odd>mini_even){
            alt_sum=alt_sum - mini_even*2 + maxi_odd * 2 ;
        }
        cout<<alt_sum<<"\n";
    }
}