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
        for(int i=0;i<n;i++){
            cin>>vec[i];
        }
        int ans=0;
        for(int i=1;i<n-1;i++){
            if(vec[i]>vec[i+1]&&vec[i]>vec[i-1]){
                //i+2 < n-1
                if(i+2<n){
                    int maxi=max(vec[i+2],vec[i]);
                    vec[i+1]=maxi;
                    ans++;
                }
                else{
                    // i + 2 > n 
                    vec[i+1]=vec[i];
                    ans++;
                }
            }
            
        }
        cout<<ans<<"\n";
        for(int i=0;i<n;i++){
            cout<<vec[i]<<" ";
        }
        cout<<"\n";
    }
}