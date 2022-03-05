#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int k,ctr=0;
        cin>>k;
        while(k>1){
            if(k%2==0){
                ctr++;
                k=k/2;
            }
            else{
                break;
            }
            
        }
        cout<<ctr<<endl;
       
    }
}