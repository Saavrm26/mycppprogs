#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<pair<int,int>> vec(n);
        multiset<pair<int,int>> ms;
        multiset<pair<int,int>> priority;
        for(int i=0;i<n;i++){
            cin>>vec[i].first>>vec[i].second;
            ms.insert(vec[i]);
            priority.insert({vec[i].second-vec[i].first,vec[i].first});
        }
        int m=(*(--(ms.end()))).second;
        
    }
}