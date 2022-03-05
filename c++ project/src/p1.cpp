#include <iostream>
#include <string>
using namespace std;
int main(){
    int a,b,c;
    cout<<"Enter the value of a : "<<endl;
    cin>>a;
    cout<<"Enter the value of b : "<<endl;
    cin>>b;
    c=a+b;
    cout<<"the sum is c : "<<c<<endl;
    string str="4578";
    cout<<str.substr(1,1);
    cout<<str.substr(1)<<str.substr(0,1);
    return 0;
}
