#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int minGroups(vector<vector<int>>& intervals) {
        sort(intervals.begin(), intervals.end());
        int n = intervals.size();
        vector<pair<int, int>> v(n);
        for (int i = 0; i < n; i++)
        {
            v[i] = make_pair(intervals[i][0], intervals[i][1]);
        }
        map<pair<int, int>, int> m;
        for (int i = 0; i < n; i++)
        {
            m[v[i]]++;
        }
        int ans=0;
        while(m.size()>0){
            auto it=m.begin();
            int ctr=(*it).second;
            while(ctr--){
                auto p=(*it).first;
                auto itr=m.upper_bound(make_pair(p.second+1,p.second+1));
                auto pp=p;
                while(1){
                    if(itr==m.end()){
                        ans++;
                        break;
                    }
                    else{
                        pp=(*itr).first;
                        m.erase((*itr).first);
                    }
                    itr=m.upper_bound(make_pair(pp.second,pp.second));
                }

            }
            m.erase(m.begin());
        }
        return ans;
    }
};
int main(){
    Solution s;
    int n,m;
    cin>>n>>m;
    vector<vector<int>> vec(n,vector<int>(m));
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>vec[i][j];
        }
    }
    cout<<s.minGroups(vec)<<"\n";
}