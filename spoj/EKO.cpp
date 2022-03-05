#include <bits/stdc++.h>
using namespace std;
int fun(long long low,long long high,long long arr[],long long h){
    int res;
    while (1<high-low)
    {
        int mid=(low+high)/2;
        //if(res==h){
        //    return res;
        //}
        if(arr[mid]>h){
            high=mid;
            res=mid;
        }
        else{
            low=mid;
        }
    }
    return res;
    return res;
}
int main(){

    long long n,m,h,maximum=0;
    cin>>n>>m;
    long long sum[n],arr[n];
    int r,l;
    for(int i=0;i<n;i++){
        cin>>arr[i];
        if(arr[i]>maximum){
            maximum=arr[i];
        }
    }
    sort(arr,arr+n);
    sum[0]=arr[0];
    for(int i=1;i<n;i++){
        sum[i] +=arr[i];
    }
    l=0,r=maximum;
    // long long L=1,R=sum[n-1];
    while(l<=r){
        h=(l+r)/2;
        long long res=fun(l,r,arr,h);
        long long wood=sum[n-1]-h*(n-res)-sum[res-1];
        if(wood==m){
            break;
        }
        else if(wood>m){
            r=h-1;
        }
        else{
            l=h+1;
        }
    }
    cout<<h<<endl;
}