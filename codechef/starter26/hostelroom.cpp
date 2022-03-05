#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,x;
        cin>>n>>x;
        int max_ppl=x;
        vector<int> vec(n);
        for(int i=0;i<n;i++){
            cin>>vec[i];
            x += vec[i];
            max_ppl= max(max_ppl,x);
        }
        cout<<max_ppl<<endl;
    }
}