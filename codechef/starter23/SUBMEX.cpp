#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k,x;
        cin>>n>>k>>x;
        if(x>=k){
            if(x>k)
                cout<<"-1";
            else{
                for(int i=0,j=0;i<n;i++,j++){
                cout<<j<<" ";
                if((i+1)%k==0){
                    j=-1;
                }
            }
            }

        }
        else{
            
            for(int i=0,j=0;i<n;i++,j++){
                cout<<j<<" ";
                 if((i+1)%x==0){
                    j=-1;
                }
                
            }
        }
       cout<<endl;
    }
    
}