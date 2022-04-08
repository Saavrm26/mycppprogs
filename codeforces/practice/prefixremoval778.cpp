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
        string s;
        cin>>s;
        map<char,int> m;
        int n=s.size();
        for(int i=0;i<n;i++){
            m[s[i]]++;
        }
        int j;
        for(j=0;j<n;j++){
            if(m[s[j]]==1)
                break;
            else{
                m[s[j]]--;
            }
        }
        cout<<s.substr(j)<<"\n";
    }
}