#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        
        int n,k;
        cin>>n>>k;
        string s;
        cin>>s;
        if(k!=0){
            string rev=s;
            reverse(rev.begin(),rev.end());
            if(s==rev){
                cout<<1<<endl;
            }
            else{
                cout<<2<<endl;
            }
        }
        else{
            cout<<1<<endl;
        }
    }   
}