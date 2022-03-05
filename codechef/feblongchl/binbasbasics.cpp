#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        string s;
        cin>>s;

        int ctr=0,flag=0;
        for(int i=0;i<=(n%2==0?n/2-1:n/2);i++){
            if(s[i]!=s[n-1-i]){
                ctr++;
                if(ctr>k){
                    flag=1;
                }
            }
        }
        if(flag==1){
            cout<<"no"<<endl;
        } 
        else{
            k = k-ctr;
            if(n%2==0){
                if(k%2==0){
                    cout<<"yes"<<endl;
                }
                else{
                    cout<<"No"<<endl;
                }
            }
            else{
                cout<<"yes"<<endl;
            }
        } 
    }
}