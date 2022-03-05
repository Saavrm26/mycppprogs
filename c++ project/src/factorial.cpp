#include <iostream>

using namespace std;
int main(){
    int t=0;
    cin>>t;
    string output="";
    for(int i=1;i<=t;i++){
        int n=0;
        cin>>n;
        int fact=1;
        for(int j=1;j<=n;j++){
            fact*=j;
        }
        output += to_string(fact)+"\n";
    }
    cout<<output<<"\b";
    return 0;
}