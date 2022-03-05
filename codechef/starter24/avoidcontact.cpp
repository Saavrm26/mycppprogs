#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int x, y;
        cin>>x>>y;    
        cout<<2*y-1+((x-y==0)?0:(x-y+1))<<endl;       
    }
}