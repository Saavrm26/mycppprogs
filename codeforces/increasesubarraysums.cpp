#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,x;
        cin>>n>>x;
        vector<int> vec(n);
        vector<int> sum(n);
        for(int i=0;i<n;i++){
            cin>>vec[i];
            if(i==0)
                sum[i]=vec[i];
            else
                sum[i]=vec[i]+sum[i];
        }
        int pos_0=0,m=0;
        for(int i=0;i<n;i++){
            if(sum[i]<=0 || i==n-1){
                m=max(sum[i]-sum[pos_0],m);
                pos_0=i;
            }
        }
        cout<<m<<endl;
    }

}