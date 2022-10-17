#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int countDistinctIntegers(vector<int>& nums) {
        int n = nums.size();
        for(int i=0;i<n;i++){
            string s= to_string(nums[i]);
            reverse(s.begin(),s.end());
            nums.emplace_back(stoi(s));
        }
        n= nums.size();
        set<int> st;
        for(int i=0;i<n;i++){
            st.insert(nums[i]);
        }
        return st.size()
    }
};