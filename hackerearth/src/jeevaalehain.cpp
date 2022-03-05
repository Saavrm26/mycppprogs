#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int N;
        cin>>N;
        int res=(N*(N+1)*(2*N+1))/6;
        cout<<res<<endl;
    }   
}