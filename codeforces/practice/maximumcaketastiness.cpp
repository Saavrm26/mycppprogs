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
        int n;
        cin>>n;
        vi vec(n);
        for(int i=0;i<n;i++){
            cin>>vec[i];
        }
        sort(vec.begin(),vec.end());
        cout<<(vec[n-1]*1ll+vec[n-2])<<"\n";
    }
}