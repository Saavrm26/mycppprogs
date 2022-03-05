#include <bits/stdc++.h>
using namespace std;
const int n=(int)100000001;
bool isPrime[n];
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    for(int i=0;i<n;i++){
        isPrime[i]=1;
    }
    int ctr=0;
    for(int i=2;i<n;i++){
        if(isPrime[i]==1){
            ctr++;
            for(int j=i*i;j<n;j=j+i){
                isPrime[j]=0;
            }
            if(ctr%100==1){
                cout<<i<<"\n";
            }
        }
        
    }
}