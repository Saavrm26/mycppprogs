#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--)   {
        int Xa,Xb,Xc;
        cin>>Xa>>Xb>>Xc;
        int m;
        string output;
        if(Xa>=Xb){
            m=Xa;
            output="A";
        }
        else{
            m=Xb;
            output="B";
        }
        if(m<=Xc){
            m=Xc;
            output="C";
        }
        if(m>50){
            cout<<output<<endl;
        }
        else
            cout<<"NOTA"<<endl;
    }
}