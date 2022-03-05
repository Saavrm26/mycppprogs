#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        // vector<int> vec(n);
        // int sum=0;
        map<int,int> m;
        for(int i=0;i<n;i++){
            int num;
            cin>>num;
            m[num]++;
        }
        map<int,int> k_map;
        for(auto i: m){
            k_map[i.second]++;
        }
        int k=1;
        while(k<=n){
            int type=0;
            for(int j=1;j<=k;j++){
                for(int i=k;i>=1;i--){
                    if(k_map.lower_bound(i)!=k_map.end()){
                        
                    }
                }
            }
            cout<<type<<" ";
            k++;
        }
        cout<<endl;
    }
}