#include <bits/stdc++.h>
using namespace std;

#define vi vector<int>
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin>>t;
    if(t%2==0){
        if(t>2)
            cout<< "YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
}