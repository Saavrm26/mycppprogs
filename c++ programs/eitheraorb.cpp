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
        vll c(n,-1);
        while(filter>0){
            bool flag=1;
            vll c_copy=c;
            for(int i=0;i<n&&flag;i++){
                bool f1=(a[i]&filter)&(c_copy[i]==-1);
                bool f2=(b[i]&filter)&(c_copy[i]==-1);
                if(f1){
                    if(f2)
                        c_copy[i]=(max(a[i],b[i]));
                    else
                        c_copy[i]=(a[i]);
                }
                else if(f2)
                    c_copy[i]=(b[i]);
                else{
                    flag=0;
                }
            }
            if(flag)
                c=c_copy;
            c_copy.clear();
            filter=filter>>1;
        }
        for(auto i:c)
            cout<<i<<" ";
    }
}