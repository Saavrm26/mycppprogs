#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int a,b,c,p,q,r;
        cin>>a>>b>>c>>p>>q>>r;
        int sum=a+b+c;
        int minimum_sum=(p+q+r)/2;
        if(sum>minimum_sum){
            cout<<"YES"<<endl;
        }
        else{
            int m=max(p-a,q-b);
            m=max(m,r-c);
            sum += m;
            if(sum>minimum_sum){
                cout<<"YES"<<endl;
            }
            else{
                cout<<"NO"<<endl;
            }
        }
    }
}