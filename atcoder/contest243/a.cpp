#include <bits/stdc++.h>
using namespace std;

int main(){
    int v,a,b,c;
    cin>>v>>a>>b>>c;
    while(v>=0){
        if(a>v){
            cout<<"F"<<"\n";
            break;
        }  
        else{
            v -= a;
            if(b>v){
                cout<<"M"<<"\n";
                break;
            }
            else{
                v -= b;
                if(c>v){
                    cout<<"T\n";
                    break;
                }
                else
                    v -=c;
            }
        }    
    }
}