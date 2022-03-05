#include <bits/stdc++.h>
using namespace std;

#define vi vector<int>
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        string str;
        cin>>str;
        int _1s=0,_0s=0;
        for(int i=0;i<str.length();i++){
            if(str[i]=='1') _1s++;
            else _0s++;
        }       
        if(_1s<_0s)
            cout<<_1s<<"\n";
        else if(_0s<_1s)
            cout<<_0s<<"\n";
        else{
            int n=str.length();
            if(n<=2)
                cout<<0<<"\n";
            else{
                if(_1s==n||_1s==0){
                    cout<<0<<endl;
                    continue;
                }
                else{
                    cout<<n/2-1<<endl;
                }
            }
        }
    }
}