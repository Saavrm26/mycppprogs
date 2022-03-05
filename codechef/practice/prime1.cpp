#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int m,n;
        cin>>m>>n;
        int f=0;
        for(int i=m;i<=n;i++){
            f=0;
            for(int j=2;j<=floor(sqrt(i));j++){
                if(i%j==0){
                    f=1;
                    break;
                }
            }
            if(f==0){
                if(i!=1)
                    cout<<i<<endl;
            }
        }    
        cout<<endl;   
    }
}