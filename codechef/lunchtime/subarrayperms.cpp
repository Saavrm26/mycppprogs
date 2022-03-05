#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        if(k==1){
            if(n==1){
                cout<<"1"<<endl;
            }
            else{
                cout<<"-1"<<endl;
            }
        }
        else{
            vector<int> vec(k-1);
            iota(vec.begin(),vec.end(),1);
            for(int i=0;i<n-k+1;i++){
                cout<<k+1+i<<" ";
            }
            for(int i=0;i<k-1;i++){
                cout<<vec[i]<<" "; 
            }
            cout<<endl;
        }
    }
}