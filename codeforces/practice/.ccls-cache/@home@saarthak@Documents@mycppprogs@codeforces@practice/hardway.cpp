#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        vector<pair<int,int>> vec(3);
        for(int i=0;i<3;i++){
            cin>>vec[i].first>>vec[i].second;
        }
        int count=0;
        double ans=0;
        for(int i=0;i<3;i++){
            for(int j=i+1;j<3;j++){
                if(vec[i].second==vec[j].second){
                    if(vec[i].second==0){
                        continue;
                    }
                    count++;
                    ans=abs(vec[i].first-vec[j].first);
                    break;
                }
                else{
                    count=0;
                }
            }
            if(count==1){
                break;
            }
        }
            cout<<setprecision(9)<<fixed<<ans<<endl;
    }
}