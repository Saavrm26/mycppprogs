#include <bits/stdc++.h>

using namespace std;
int main(){
    int t;
    cin>>t;
    string output="";
    while(t>0){
    int  z,y,a,b,c;
    cin>>z>>y>>a>>b>>c;
    int rem=z-y;
    
    if(rem>=(a+b+c)){
        output +="YES\n";
    }
    else {
        output +="NO\n";
        }
        t--;
    }
    cout<<output;
}