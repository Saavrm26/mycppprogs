#include <bits/stdc++.h>
using namespace std;

#define vi vector<int>
#define ll long long
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string a;
        cin>>a;
        vector<char> vec;
        copy(a.begin(),a.end(),back_inserter(vec));
        sort(vec.begin(),vec.end());
        for(auto i:vec){
            cout<<i;
        }
        cout<<"\n";
    }
}