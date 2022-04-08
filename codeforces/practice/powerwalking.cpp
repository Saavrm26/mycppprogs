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
        set<int> s;        
        for(int i=0;i<n;i++){
            cin>>vec[i];
            s.insert(vec[i]);
        }
        int k=1;
        while(k<=n){
            if(k<s.size()){
                cout<<s.size()<<" ";
            }
            else{
                cout<<k<<" ";
            }
            k++;
        }
        cout<<"\n";
    }
}