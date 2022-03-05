#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    long long t;
    cin>>t;
    
    while(t--){
        int n,m;
        cin>>n>>m;
        long long sum=0;
        for(long long i=1;i<=(long long)n;i++)
        {
            if(i%2==0){
                long long x=i;
                while(x>0){
                    long long temp=(x/2);
                    if(temp%2==1){
                        sum +=(temp%m);
                        
                        break;
                    }
                    else{
                        x=x/2;
                    }
                }
            }
            else{
                sum += i;
            }
        }
        cout<<sum%m<<"\n";
    }
}
