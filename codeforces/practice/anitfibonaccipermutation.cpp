#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> vec(n);
        for(int i=0;i<=(n-1)/2;i++){
            vec[i]=2*i+1;
            if(i+(n-1)/2 + 1 < n){
                vec[i+(n-1)/2 + 1]=2*(i+1);
            }
        }
        if(n>=6){
            int temp=vec[(n-1)/2+2];
            vec[(n-1)/2+2]=vec[(n-1)/2+3];
            vec[(n-1)/2+3]=temp;
        }
        for(int i=0;i<n;i++){
            for(auto i : vec){
                cout<<i<<" ";
            }
            if(i<n-1){
                int temp=vec[i+1];
                vec[i+1]=vec[i];
                vec[i]=temp;
            }
            cout<<endl;
        }
    }
}