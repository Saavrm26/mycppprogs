#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    for(int i=1;i<=n*2-1;i++){
        for(int j=1,k=n;j<=n*2-1;j++){
            
            if(j<=n)
            {
                cout<<k<<" ";
                if(k>abs(n-i)+1){
                    k--;
                }
            }
            else{ 
                if(abs(n-k)>=abs(n*2-j)){
                    k++;
                }
                cout<<k<<" ";
            }
            
        }
        cout<<endl;
    }
}