#include <bits/stdc++.h>
using namespace std;

#define vi vector<int>
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
        vi holidays{6,7,13,14,20,21,27,28};
        int ans=holidays.size();
        for(int i=0;i<n;i++){
            cin>>vec[i];
            if(!(binary_search(holidays.begin(),holidays.end(),vec[i]))){
                ans += 1;
            }
        }
        cout<<ans<<endl;
    }
}