#include<bits/stdc++.h>
using namespace std;

#define vi vector<int>
#define ll long long
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vi vec(n);
        for(int i=0;i<n;i++){
            cin>>vec[i];
        }
        auto v=vec;
        sort(v.begin(),v.end());
        int k_largest=1;
        vector<int> ans;
        while(k_largest<=n){
            if(vec[n-k_largest]==v[n-k_largest]){
                ans.push_back(0);
            }
            else{
                auto idx = find(vec.begin(),vec.end(),v[n-k_largest]);
                ans.push_back(idx+1-vec.begin());
                rotate(vec.begin(),idx+1,vec.end()-k_largest+1);
            }
            k_largest++;
        }
        bool f=false;
        for(int i=0;i<n;i++){
            if(vec[i]==v[i]) f=true;
            else{f=false;break;}
        }
        if(f){
            for(int i=ans.size()-1;i>=0;i--)
                cout<<ans[i]<<" ";
        }
        else
            cout<<"-1";
        cout<<"\n";
    }
}