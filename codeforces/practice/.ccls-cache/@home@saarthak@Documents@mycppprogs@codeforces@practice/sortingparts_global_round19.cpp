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
        auto v=vec;
        int flag=1;
        sort(v.begin(),v.end());
        int correct=0;
        for(int i=0;i<n-1;i++){
            if(vec[i]==v[i]){
                correct++;
            }
        }
        if(correct!=vec.size()-1){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
}