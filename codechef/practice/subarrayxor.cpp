#include <bits/stdc++.h>
using namespace std;

#define vi vector<int>
#define ll long long
#define mod 998244353;
ll stob(string str){
    ll num=0;
    for(int i=str.size()-1;i>=0;i--){
        int bit=str[i]-'0';
        num += bit*(1<<(str.size()-i-1)); 
    }
    return num;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        string str;
        cin>>str;
        ll odd_mask=0,even_mask=0;
        // even_mask=2,odd_mask=1;
        for(ll i=1;i<=(n+1)/2;i++){
            even_mask=(even_mask<<2)+2 ;
            odd_mask=(odd_mask<<2)+1;
        }
        ll num=stob(str);
        ll beauty=0;
        if(n%2==0){
            for(ll i =n-1;i>=0;i--){
                beauty=beauty^(num&even_mask);
                // beauty=beauty%mod;
                even_mask=even_mask>>1;
                num=num>>1;
            }
        }
        else{
            for(ll i =n-1;i>=0;i--){
                beauty=beauty^(num&odd_mask);
                odd_mask=odd_mask>>1;
                num=num>>1;
            }
        }
        // beauty = beauty %mod;
        cout<<beauty<<"\n";
    }
}