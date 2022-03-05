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
        long c;
        cin>>c;
        long x=1;
        while(x<<1<=c){
            x=x<<1;
        }
        long b=x-1;
        long a=c^b;
        cout<<a*b<<endl;
    }
}