#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n,q;
    cin>>n>>q;
    int _1s=0;
    vector<int> vec(n);
    for(int i=0;i<n;i++){
        cin>>vec[i];
        if(vec[i]==1){
            _1s++;
        }
    }
    while(q--){
        int t,x;
        cin>>t>>x;
        if(t==1){
            if(vec[x-1]==0){ _1s++;vec[x-1]=1;}
            else {_1s--;vec[x-1]=0;}
        }
        else{
            if(x<=_1s){
                cout<<1<<endl;
            }
            else{
                cout<<0<<endl;
            }
        }
    }
}