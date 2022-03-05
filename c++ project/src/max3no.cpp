#include <bits/stdc++.h>

using namespace std;
int main(){
    int a, b,c;
    cin>>a >> b>>c;
    int max;
    if(a>b){
        max=a;
        if(c>max){
            max=c;
        }

    }
    else{
        max=b;
        if(c>max){
            max=c;
        }
    }
    cout<<max;
}