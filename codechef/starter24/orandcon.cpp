#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int x;
        cin>>x;
        if((x!=1)&&(x!=2)&&(x!=3)){
            int b=ceil(log2(x)); // 3
            int c=b-1 ;  // 2 
            int d=pow(2,b+1)-1; //15 
            int e=pow(2,c)-1;  //7 
            cout<<x<<" "<<d<<" "<<e<<endl;
        }
        else{
            cout<<"1"<<" "<<"2"<<" "<<"3"<<endl;
        }
    }
}