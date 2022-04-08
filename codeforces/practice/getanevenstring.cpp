#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin>>s;
        ll n= s.size();
        ll ans=0;
        map<char, ll> m;
        for(int i=0; i<s.size(); i++){
            m[s[i]]++;
            if(m[s[i]]==2){
                ans++;
                m.clear();
            }
        }
        cout<<n-2*ans<<endl;
    }
    return 0;
}