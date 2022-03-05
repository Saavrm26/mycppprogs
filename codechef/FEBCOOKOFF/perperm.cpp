#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        vector<int> vec(n);
        if(n>=k){
            if(n!=k){
                
                if(n-k>1){
                    vec[0]=n;
                    vec[n-2]=1;
                    vec[n-1]=k+1;
                    for(int i=1;i<k;i++){
                        vec[i]=i+1;
                    }
                    for(int i=k;i<n-2;i++){
                        vec[i]=i+2;
                    }
                }
                if(n-k==1){
                    vec[0]=n;
                    vec[n-1]=1;
                    for(int i=1;i<k;i++){
                        vec[i]=i+1;
                    }
                    for(int i=k;i<n-2;i++){
                        vec[i]=i+2;
                    }
                }
                for(auto i : vec){
                    cout<<i<<" "; 
                }
            }
            else{
                for(int i=0;i<n;i++){
                    cout<<i+1<<" ";
                }
            }
            cout<<endl;
        }
        else{
            cout<<-1<<endl;
        }
    }
}