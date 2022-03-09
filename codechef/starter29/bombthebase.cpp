#include <bits/stdc++.h>
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
        int n,x;
        cin>>n>>x;
        vi vec(n);
        int last=-1;
        for(int i=0;i<n;i++){
            cin>>vec[i];
            if(vec[i]<x){
                last = i;
            }
        }
        cout<<last+1<<"\n";
    }
}