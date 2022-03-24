#include <bits/stdc++.h>
//datatype snippets
#define ll long long
//vector snippets
#define vi vector<int>
#define vll vector<long long>
#define eb emplace_back
//function snippets
ll minimum(ll a,ll b){if(a<b) return a;else return b;}
ll maximum(ll a,ll b){if(a>b) return a;else return b;}
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        string s;
        cin>>s;
        ll count_1=0,count_0=0;
        for(int i=0;i<n;i++){
            if(s[i]=='1')
                count_1++;
            else
                count_0++;
        }   
        if(count_0==count_1)
            cout<<n<<"\n";
        else
            cout<<(minimum(count_0,count_1)*2+1)<<"\n";
    }
}