#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int arr[n];
        long long prefix[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
            if(i==0)
                prefix[i]=arr[i];
            else
                prefix[i]=prefix[i-1]+arr[i];
        }
        if(n!=1){
            long long ans=INT64_MAX;
            for(int i=0;i<n;i++){
                ans=fmin(ans,max(prefix[i],prefix[n-1]-prefix[i]));
            }
            cout<<ans<<endl;
        }
        else{
            cout<<arr[0]<<endl;
        }
    }
}