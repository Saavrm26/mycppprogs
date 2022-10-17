#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    typedef long long ll;
    long long countSubarrays(vector<int>& nums, int minK, int maxK) {
        int n = nums.size();
        vector<int> maxi,mini,invalid;
        for(int i=0;i<n;i++){
            if(nums[i]==minK){
                mini.emplace_back(i);
            }
            else if(nums[i]==maxK){
                maxi.emplace_back(i);
            }
            else{
                invalid.emplace_back(i);
            }
        }
        maxi.emplace_back(n);
        mini.emplace_back(n);
        invalid.emplace_back(n);
        ll ans = 0;
        for(int i=0;i<n;i++){
            int b1 = *lower_bound(invalid.begin(),invalid.end(),i);
            int  b2 = *lower_bound(maxi.begin(),maxi.end(),i);
            int b3 = *lower_bound(mini.begin(),mini.end(),i);
            int actualboundary = max(b2,b3);
            int d=0;
            if(actualboundary<b1){
                d = b1-actualboundary;
            }
            ans+=d;
        }
        return ans;
    }
};