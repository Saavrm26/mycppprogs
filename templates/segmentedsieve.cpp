#include <bits/stdc++.h>
using namespace std;

int main(){
    long l,r;
    cin>>l>>r;
    vector<int> isPrime(1e5+1,1);
    isPrime[0]=0;
    isPrime[1]=0;
    for(int i=2;i*i<r;i++){
        if(isPrime[i]){
            for(int j=i*i;j<r;j=j+i){
                isPrime[j]=0;
            }
        }
    }
    vector<int> vec(r-l+1,0);
    for(int i=2;i<=sqrt(r);i++){
        if(isPrime[i]==1){
            for(int j=l+l%(i*i);j<r;j += i){
                
            }
        }
    }
}