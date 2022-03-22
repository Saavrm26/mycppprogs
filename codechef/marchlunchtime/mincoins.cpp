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
        int x;
        cin>>x;
        int ans=x/10;
        int rem=x%10;
        if(rem==5 || rem==0)
            ans+= rem/5;
        else
            ans=-1;
        cout<<ans<<"\n";
    }
}