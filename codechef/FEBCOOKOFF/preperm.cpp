#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        vector<int> vec(k);
        vector<int> v(n);
        for(int i=0;i<k;i++){
            cin>>vec[i];
        }
        int x=0,min=0;
        int p=vec[0];
        for(int i=0;i<n;i++){
            v[i]=p--;
            if(p==min){
                min=vec[x];
                p=vec[++x];
            }
        }        
        for(auto i : v){
            cout<<i<<" ";
        }
        cout<<endl;
    }
}