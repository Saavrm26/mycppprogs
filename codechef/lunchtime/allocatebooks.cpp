#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int a ,b ,c;
        cin>>a>>b>>c;
        int m=max(a,b);
        m=max(m,c);
        if(m==(a+b+c-m)){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
    
}