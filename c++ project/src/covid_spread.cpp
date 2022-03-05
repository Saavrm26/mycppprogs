#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int N,D;
        cin>> N>> D;        
        long long int infected=1;    
        if(0<=D&&D<10){
            infected= pow(2,D);
            if(infected>N){
                infected=N;
            }
        }
        else{
            infected = pow(2,10);
            if(infected>N){
                infected=N;
            }
            else{
                int q=D-10;
                int mult=1,flag=1;
                // if(q>0){   
                //     long int u = pow(3,q);
                //     if(u>=N){
                //         infected=N;
                //     }
                //     else{ 
                //         infected = infected*u;
                while(q>0){
                    mult=mult*3;
                    if(mult>N){
                        flag=0;
                        break;
                    }
                    q--;
                }
                if(flag==0){
                    infected=N;
                }
                else{
                    infected = mult * infected;
                    if(infected>N){
                        infected=N;
                    }
                }
                        
            }
        }
        cout<<infected<<endl;
    }
}