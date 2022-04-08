#include <bits/stdc++.h>
using namespace std;

#define vi vector<int>
#define ll unsigned long long
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        if(n==1){
            cout<<1<<endl;
        }
        else{
            cout<<(1<<n)-1<<endl;
        }
    }
}