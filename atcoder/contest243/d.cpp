#include <bits/stdc++.h>
using namespace std;

#define vi vector<int>
#define ll long long
#define lli long long int
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll n,x;
    cin>>n>>x;
    string ops;
    cin>>ops;
    for(int i=0;i<n;i++){
        if(ops[i]=='U')
            x=x/2;
        else if(ops[i]=='R')
            x=x*2+1;
        else
            x=x*2;
    }
    cout<<x<<"\n";
}