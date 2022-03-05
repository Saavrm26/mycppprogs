#include <bits/stdc++.h>
using namespace std;

#define vi vector<int>          // saare operations binary se bhi kar sakte agar further optimise karna hai to
void init(vi &lookup){
    lookup[0]=0;
    for(int i=1;i<256;i++){
        if(i%2==0)
            lookup[i]=lookup[i/2];
        else
            lookup[i]=1+lookup[i/2];
        
    }
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    vi lookup(256);
    init(lookup);
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int ctr=0;
        while(n>0){
            int rem=n%256;
            ctr += lookup[rem];
            n=n/256;
        }
        cout<<ctr<<endl;
    }
}