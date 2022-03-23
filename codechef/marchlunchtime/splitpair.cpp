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
        string str;
        cin>>str;
        int n=str.size();
        int odd_count=0,even_count=0;
        int sum=0;
        for(int i=0;i<n;i++){
            if((str[i]-'0')%2)
                odd_count++;
            else
                even_count++;
        }
        string ans="YES";
        bool f=1;
        if(even_count==1){
            if((str[n-1]-'0')%2==0){
                ans="NO";
                f=0;
            }
        }
        if((odd_count==1)&&f==1){
            if((str[n-1]-'0')%2==1)
                ans="NO";
        }
        cout<<ans<<"\n";
    }
}