#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n;
        cin>>k;
        int arr[n],prefix_sum[n+1],ctr=0;
        prefix_sum[0]=0;
        for(int i=1;i<n+1;i++){
            cin>>arr[i];
            if(i!=1){
                prefix_sum[i]=prefix_sum[i-1]+arr[i];
            }
            else 
                prefix_sum[i]=arr[i];
        }
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n+1;j++){
                int sum=prefix_sum[j]-prefix_sum[i];
                if(sum==k){
                    ctr++;
                }
            }
        }  
        cout<<ctr<<endl;
    }
}