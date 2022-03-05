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
        int ctr=0;
        for(int i=0;i<n;i++){
            cin>>vec[i];
            if(vec[i]>=10&&vec[i]<=60){
                ctr++;
            }
        }
        cout<<ctr<<endl;
    }
}