#include <bits/stdc++.h>
using namespace std;

//datatype snippets
#define ll long long
//vector snippets
#define vi vector<int>
#define vll vector<long long>
#define eb emplace_back
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        int n,x;
        cin>>n>>x;
        int ans=0;
        if(n!=1)
            ans=(n-n/3)*x;
        else
            ans=x;
        cout<<ans<<"\n";
    }
}