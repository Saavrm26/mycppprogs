#include <bits/stdc++.h>
using namespace std;

int main(){
    long long n,m;
    cin>>n>>m;
    int sum[n],arr[n];
    int r=0,l;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    sort(arr,arr+n);
    sum[0]=arr[0];
    for(int i=1;i<n;i++){
        sum[i] +=arr[i];
    }
    l=arr[0];
    while(r-l>1){
        int mid=(l+r)/2;
        if()
        else if(sum[n-1]-sum[mid]>m){
            l=mid;
        }
        else{
            r=mid;
        }
    }
    cout<<arr[l]<<endl;
}