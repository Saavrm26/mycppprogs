#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,x,y;
        cin>>n>>x>>y;
        int a[n],b[n];
        for (int i = 0; i < n; i++){
            cin>>a[i];
        }
        int flag=0;
        for(int i=0;i<n;i++){
            cin>>b[i];
            if((b[i]-x==a[i]||b[i]-y==a[i])&&(flag==0)){
                flag=0;
            }
            else {
                flag=1;
            }
        }
        if(flag==1){
            cout<<"NO"<<endl;
        }
        else{
            cout<<"YES"<<endl;
        }
    }   
}