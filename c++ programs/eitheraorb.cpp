#include <bits/stdc++.h>
using namespace std;

#define vi vector<int>
#define ll long long
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
        vll a(n),b(n);
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        for(int i=0;i<n;i++){
            cin>>b[i];
        }
        int filter=1<<30;
        vll c(n);
        int ans=0;
        while(filter>0){
            bool flag=1;
            for(int i=0;i<n&&flag;i++){
                bool f1=(a[i]&filter);
                bool f2=(b[i]&filter);
                if(f1||f2)
                    flag=1;
                else
                    flag=0;
            }
            if(flag)
                ans = ans | filter;
            filter=filter>>1;
        }
        for(int i=0;i<n;i++){
            if(ans&a[i]==ans)
                c[i]=a[i];
            else
                c[i]=b[i];
        }
        for(auto i:c)
            cout<<i<<" ";
    }
}