#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    vector<int> isPrime(1e5+1,1);
    isPrime[0]=0;
    isPrime[1]=0;
    for(int i=2;i<1e5+1;i++){
        if(isPrime[i]){
            for(int j=2*i;j<1e5+1;j=j+i){
                isPrime[j]=0;
            }
        }
    }
    while(t--){
        
    }
}