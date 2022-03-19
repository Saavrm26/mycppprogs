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
        string s;
        cin>>s;
        string s_sorted = s;
        bool flag=1;
        sort(s_sorted.begin(),s_sorted.end());
        for(int i=0;i<n;i++){
            if(s_sorted[i]==s[i]){
                continue;
            }
            else if(s_sorted[i]==s[n-i-1]){
                continue;
            }
            else{
                flag=0;
                break;
            }
        }
        if(flag)
            cout<<"YES\n";
        else
            cout<<"NO\n";
    }
}