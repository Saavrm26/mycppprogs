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
        string str;
        cin>>str;
        int ans=n;
        for(int i=0;i<n-1;i++){
            if(str[i]==str[i+1]){
                ans--;
                i++;
            }
        }
        cout<<ans<<"\n";
    }
}