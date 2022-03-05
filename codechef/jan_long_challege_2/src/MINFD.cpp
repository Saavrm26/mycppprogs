#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,x,index=-1;
        cin>>n>>x;
        int arr[n],sum=0;
        for(int i=0;i<n;i++){
            cin>>arr[i];
            sum+=arr[i];
        }
        sort(arr,arr+n,greater<int>());
        if(sum>x){
            int s=0,ctr=0;
            for(int i=0;i<n;i++){
                if(s<x){
                    s+=arr[i];
                    ctr++;
                }
                else break;
            }
            cout<<ctr<<endl;
        }
        else if(sum==x){
            cout<<n<<endl;
        }
        else 
            cout<<-1<<endl;
    }
}