#include <bits/stdc++.h>
using namespace std;

int find_least_diff(map<int,int> &m,int x){
    auto upperb = m.upper_bound(x);
    auto ele_itr= m.find(x);
    if(upperb!=m.end()){
        int ele=(*ele_itr).first;
        int upper_ele= (*upperb).first;
        if(ele_itr!=m.begin()){
            int lower_ele= (*(--ele_itr)).first;
            if(abs(upper_ele-ele)<abs(ele-lower_ele))
                return upper_ele;
            else
                return lower_ele;
        }
        else{
            return upper_ele;
        }
    }
    else
        return (*(--ele_itr)).first;
}

int main(){
    int n;
    cin>>n;
    vector<int> vec(n);
    map<int,int> m;
    vector<int> ans;
    for(int i=0;i<n;i++){
        cin>>vec[i];
        m[vec[i]]++;
        if(i==0)
            ans.push_back(-1);
        else if(m[vec[i]]>1)
            ans.push_back(0);
        else
            ans.push_back(find_least_diff(m,vec[i]));
        
    }
    for(auto i:ans){
        cout<<i<<" ";
    }
}