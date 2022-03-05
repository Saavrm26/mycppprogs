#include <bits/stdc++.h>
using namespace std;

int main(){
    
        int t;
        cin>>t;
        while(t--){
            int n;
            cin>>n;
            int arr[n];
            int max=0;
            for(int i=0;i<n;i++){
                cin>>arr[i];
                if(max<arr[i]){
                    max=arr[i];
                }
            }
            int ctr=0;
            for(int i=0;i<n;i++){
                if(arr[i]==max){
                    ctr++;
                }
            }
            cout<<ctr<<endl;
        }
       
}