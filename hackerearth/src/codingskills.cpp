#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        
        int arr[n];
        int ctr=0;
        for(int i=0;i<n;i++){
            cin>>arr[i];
            if(arr[i]==0){
                ctr++;
            }
        }
        int teams=ctr*(n-1);
        if(ctr>1){
            teams=teams-(ctr*(ctr-1))/2;
            cout<<teams<<endl;
        }
        else if(ctr==0){
            cout<<0<<endl;
        }
        else{
            cout<<teams<<endl;
        }
        
    }   
}