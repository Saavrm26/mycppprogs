#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,w;
        cin>>n>>w;
        vector<int> vec(n);
        for(int i=0;i<n;i++){
            cin>>vec[i];
        }
        int sum=0,nec=0;
        sort(vec.begin(),vec.end());
        for(int i=n-1;i>=0;i--){
            if(sum+vec[i]<=w){
                nec++;
                if(sum+vec[i]==w){
                    break;
                }
            }
            else{
                nec++;
                break;
            }
            sum+=vec[i];
            
        }
        cout<<n-nec<<endl;
    }
}