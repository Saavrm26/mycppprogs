#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int sum;
        vector<int> vec(n);
        for(int i=0;i<n;i++){
            cin>>vec[i];
            if(i==0){
                sum = vec[0];
            }
            else{
                sum = sum | vec[i];
            }
        }
        cout<<sum<<endl;
    }
}