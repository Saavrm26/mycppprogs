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
        long long n;
        long long s;
        cin>>n>>s;
        if(n*n>s){
            cout<<0<<endl;
        }
        else{
            cout<<s/(n*n)<<endl;
        }
    }
}