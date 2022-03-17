#include <bits/stdc++.h>
using namespace std;

#define vi vector<int>
#define ll long long
#define vll vector<long long>
#define mod 998244353;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        string str;
        cin>>str;
        vll prefix(n,0);
        for(ll i=0;i<n;i++){
            if(str[i]=='1'){
                if(i==0)
                    prefix[0]=i+1;
                else
                    prefix[i]=prefix[i-1]+i+1;
            }
            else{
                if(i!=0)
                    prefix[i]=prefix[i-1];
            }
        }
        // vector<int> cnt(n);
        // for (int i = 0; i < n; ++i)
        //     if (str[i] == '1') cnt [n - i - 1] += (i + 1);
        // for (int j = n - 2; j >= 0; --j)
        //     cnt[j] += cnt[j + 1];
        // reverse(cnt.begin(),cnt.end());

        ll xor_ans=0,expo=1;
        for(int i=n-1;i>=0;i--){
            if(prefix[i]%2){
                xor_ans = (xor_ans+expo) % mod;
            }
            expo=(expo*2)%mod;
            
        }
        cout<<xor_ans<<"\n";
    }
}