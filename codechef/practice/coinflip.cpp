#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        //1+1+1+1+1+1+1 1+1+1+1+1+1 1+1+1+1 1+1+1+1 1+1+1 1+1 1
        int g;
        cin>>g;
        while(g--){
            int i,n,q;   // i=1 heads i=2 tails   N: number of rounds   Q: 1 : tell the number of heads and if q=2 then tell the numeber of tails
            cin>>i>>n>>q;
            if(n%2==0)
                cout<<n/2<<endl;
            else{
                if(q==i)
                    cout<< n/2 <<endl;
                else
                    cout<< n/2 +1<<endl;
            }
                
        }       
    }
}// T/H/T/H/T/H T/H/T/H/T   T/H/T/H   T/H/T   T/H  T