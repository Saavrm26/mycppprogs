#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        map<int,int> m;
        for(int i=0;i<n;i++){
            int num;
            cin>>num;
            m[num]++;
        }
        int ans=0;
        for(auto it=m.begin();it!=m.end();it++){
            int x=(*it).first;
            int y= 1 + x*x;
            auto f=m.find(y);
            if(f!=m.end()){
                ans += ((*it).second)*((*f).second);
            }
            
        }
        cout<<ans;
    }
}