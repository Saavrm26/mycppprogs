#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;       
        long long arr[n];
        int even=0, odd=0;
        // long long odd_total=1,even_total=1;
        for(int i=0;i<n;i++){
            cin>>arr[i];
            int x=(long long)log2(arr[i]);
            if(x%2==0){
                even++;
                // even_total *=2;
            }
            else{
                odd++;
                // odd_total *=2;
            }
        }
        long long ans=1;
        for(long int i=1;i<=even+(odd!=0?odd-1:0);i++){
            ans *= 2;
            if(ans>1e9+7){
                ans = ans %((int)1e9+7);
            }
        }
        cout<<ans-1<<endl;
    }
}