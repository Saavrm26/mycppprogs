#include <bits/stdc++.h>

using namespace std;
int main(){
    int t;
    cin>>t;
    string output="";
    while(t>0){    
        int n,x,y;
        cin>>n>>x>>y;
        if((x%2==0 && y%2==0)||(x%2==1 && y%2==1)){
            output += "0\n";
        }
        else output +="1\n";
        t--;
    }
    cout<<output;
}