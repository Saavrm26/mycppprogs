#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int> isPrime(1e5+1,1);
    vector<int> vec(1e5+1,0);
    // for(int i=2;i<1e5+1;i++){
    //     vec[i]=i;
    // }
    vec[0]=-1;
    vec[1]=-1;
    isPrime[0]=0;
    isPrime[1]=0;
    for(int i=2;i<1e5+1;i++){
        if(isPrime[i]){
            vec[i]=1;
            for(int j=2*i;j<1e5+1;j=j+i){
                isPrime[j]=0;
                vec[j]++;
            }
        }
    }
    int t;
    cin>>t;
    while(t--){
        int a,b,k;
        cin>>a>>b>>k;
        int ans=0;
        for(int i=a;i<=b;i++){
            if(vec[i]==k)   
                ans++;
        }
        cout<<ans<<endl;
    }
}