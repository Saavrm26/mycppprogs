#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s;
        cin>>s;
        int _1=0,_0=0;
        for(int i=0;i<n;i++){
            if(s[i]=='1')
                _1++;
            else
                _0++;
        }
        if(n%2==0){
            if(_0!=_1){
                if( _0%2==0 && _1%2==0 ){
                    cout<<"YES"<<endl;
                }
                else{
                    cout<<"NO"<<endl;
                }
            }
            else{
                cout<<"YES"<<endl;
            }
        }
        else{
                cout<<"YES"<<endl;
        }
    }
}