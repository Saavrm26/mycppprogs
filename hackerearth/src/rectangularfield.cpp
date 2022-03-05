#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int a;
        cin>>a;
        int n;
        for(n=1;n*n<=a;n++){
            
        }
        int l,b;
        int min=INT32_MAX;
        for(int i=1;i<n;i++){
            if(a%i==0){
                l=i;
                b=a/i;
            }
            int ab;
            if(b-l<0){
                ab=0-(b-l);
            }
            if(b-l<=min){
                min=b-l;
            }
        }
        cout<<min<<endl;
    }
}