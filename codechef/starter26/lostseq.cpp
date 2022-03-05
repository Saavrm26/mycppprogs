#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int odd_count=0;
        vector<int> vec(2*n);
        for(int i=0;i<2*n;i++){
            cin>>vec[i];
            if(((int)abs(vec[i]))%2==1){
                odd_count++;
            }
        }       
        if(odd_count%2==0){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
}