#include <bits/stdc++.h>
using namespace std;

int main(){
    int x;
    cin>>x;
    //normal
    int c=0; 
    while(x>0){
        if(x&1){
            c++;
        }
        x=x>>1;
    }
    cout<<c<<endl;
    //brain kerningham
    int n=31,ctr=0;
    while(n!=0){
        n=n&(n-1);
        ctr++;
    }
    cout<<ctr<<endl;
}