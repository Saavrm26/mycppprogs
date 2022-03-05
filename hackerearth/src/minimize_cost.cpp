#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,k;
    cin>>n>>k;
    vector<int> vec(n);
    vector<int> pos;
    for(int i=0;i<n;i++){
        cin>>vec[i];
        if(vec[i]<0){
            pos.push_back(i);
        }
    }
    vector<int> flag(n,1);
    int res;
    for(int i=0;i<pos.size();i++){
        int sum=vec[pos[i]];
        for(int j=1;j<=k;j++){
            int f=0;
            if(pos[i]+j<n){
                if(vec[pos[i]+j]>0){   
                    f++;
                    break;
                }
                    
            }
            if(pos[i]-j>=0){
                if(vec[pos[i]+j]>0){
                    f++;
                    break;
                }
                if(f>0)
                    flag[pos[i]]=1;
                else
                    flag[pos[i]]=0;
            }
        }
    }
    for(int i=0;i<n;i++){
        if(flag[i]==1){
            res += vec[i];
        }
        else{
            res += vec[i]*-1;
        }
    }
    cout<<res<<endl;
    
}
