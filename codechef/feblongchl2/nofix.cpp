#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> vec(n);
        for(int i=0;i<n;i++){
            cin>>vec[i];
        }
        int increment=0;
        for(int i=0;i<n;i++){
            if(vec[i]==i+1+increment){
                increment++;
            }
        }
        cout<<increment<<endl;
    }
}