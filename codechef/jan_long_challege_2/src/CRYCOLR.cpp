#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    cin.ignore();
    while(t--){
        int n;
        cin>>n;
        cin.ignore();
        int r[3],g[3],b[3];
        for(int i=0;i<3;i++){
            cin>>r[i];
        }
        for(int i=0;i<3;i++){
            cin>>g[i];
        } 
        for(int i=0;i<3;i++){
            cin>>b[i];
        }
        int swaps=0;
        //0 - R
        //1 - G
        //2 - B
        if(r[1]>0&&g[0]>0){
            int m=min(g[0],r[1]);
            swaps +=m;
            r[1] -=m;
            g[0] -=m;
            g[1] +=m;
            r[0] +=m;
        }
        if(r[2]>0&&b[0]>0){
            int m=min(b[0],r[2]);
            swaps +=m;
            r[2] -=m;
            b[0] -=m;
            r[0] +=m;
            b[2] +=m;
        }
        
        if(g[2]>0&&b[1]>0){
            int m=min(g[2],b[1]);
            swaps +=m;
            g[2] -=m;
            b[1] -=m;
            g[1] +=m;
            b[2] +=m;
        }
        
        if(r[0]!=n&&g[1]!=n&&b[2]!=n){
            if(r[1]>0){
                int m=g[2];
                g[1] +=m;
                r[1] -=m;
                r[2] +=m;
                g[2] -=m; 
                swaps +=m;
            }
            else if(r[2]>0){
                int m=g[1];
                g[2] +=m;
                r[2] -=m;
                r[1] +=m;
                g[1] -=m;
                swaps +=m;
            }
        }
            if(r[0]==n){
                swaps +=n-g[1];
            }
            if(g[1]==n){
                swaps += n-r[0];
            }
            if(b[2]==n){
                swaps += n-r[0];
            }
        cout<<swaps<<endl;
    }
}