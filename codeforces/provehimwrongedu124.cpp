#include <bits/stdc++.h>
using namespace std;

#define vi vector<int>
#define ll  unsigned long long
#define vll vector<long long>
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vll vec(n);
        ll x=1;
        bool f=true;
        for(int i=0;i<n;i++){
            vec[i]=x;
            if(x>(ll)(pow(10,9))){
                f=false;
                break;
            }
            x *=3;
        }
        if(f){
            cout<<"YES\n";
            for(int i=0;i<n;i++){
                cout<<vec[i]<<" ";
            }
        }
        else
            cout<<"NO";
        cout<<"\n";
    }
}