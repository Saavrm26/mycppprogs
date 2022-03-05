#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    // set<pair<int,int>> s;
    map<int,int> ranges;
    vector<pair<int,int>> vec;
    for(int i=0;i<n;i++){
        int l,r;
        cin>>l>>r;
        ranges[l]++;
        ranges[r+1]--;
    }
    for(auto it=++ranges.begin();it!=ranges.end();it++){
        auto i=it;
        vec.push_back({(*it).first,(*it).second+(*(--i)).second});
    }
    for(auto it : vec){
        cout<< it.first<<" "<<it.second<<" "<<endl; 
    }
    int q;
    while(q--){
        int y;
        cin>>y;
        auto it = upper_bound(vec.begin(),vec.end(),y);
        cout<<(*it).first<<endl;
    }
}