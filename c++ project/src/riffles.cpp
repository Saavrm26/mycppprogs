#include <bits/stdc++.h>

using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int N,K;
        cin>>N >> K;
        vector<int> vec,v1,v2;
        iota(vec.begin(),vec.end(),1);
        int l=0;
        while (K--)
        {
            for(int j=0,k=1;k<N;j+=2,k+=2){
                v1.push_back(vec.at(j));
                v2.push_back(vec.at(k));
            }
            v1.insert(v1.end(),v2.begin(),v2.end());
            copy(v1.begin(),v1.end(),vec);
            l++;
            if(v1.at(1)==2){
                K=K%l;
            }
            v1.clear();
            v2.clear();
        }
        for(auto i : vec){
            cout<<i<<" ";
        }
        cout<<endl;
    }
}