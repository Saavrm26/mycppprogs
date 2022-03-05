#include <bits/stdc++.h>
using namespace std;

int main(){
    
        long long n;
        cin>>n;
        long long sum=0;
        for(int i=0;i<n;i++){
            long long ele;
            cin>>ele;
            sum += ele;
        }
        if((n*(n+1))/2==sum){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
}