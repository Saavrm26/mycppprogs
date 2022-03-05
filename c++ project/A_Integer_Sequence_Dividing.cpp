#include <bits/stdc++.h>
using namespace std;

int main(){
    long int n;
    cin>>n;
    if(n%2==0){
        
        if((n/2)%2==0) 
            cout<<"0"<<endl;
        else
            cout<<"1"<<endl;
    }   
    else {
        if((n/2)%2==0) 
            cout<<"1"<<endl;
        else
            cout<<"0"<<endl;
    }
}