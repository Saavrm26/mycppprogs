#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,c;
        cin>>n>>c;
        int arr[n];
        int maxi=0,mini=0;
        for(int i=0;i<n;i++){
            cin>>arr[i];
            if(maxi<arr[i]){
                maxi=arr[i];
            }
            if(mini>arr[i]){
                mini=arr[i];
            }
        }
        int l=mini,r=maxi;
        sort(arr,arr+n);
        while(r>=l){
            int mid=(r+l)/2;
            
        }
    }
}