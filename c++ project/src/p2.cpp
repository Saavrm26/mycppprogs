#include <iostream>
using namespace std;

int main(){
    int a=0;
    int* b=&a;
    // cout<<"the value of a is : "<<a<<"and its address is : "<<b<<"\t"<<&a ;
    // cout<<"the value at address "<<b<<"is "<<*b;
    // int marks[4]={1,2,3,4};
    // cout<<*marks<<endl;
    // int* p=marks;
    // cout<<*p<<endl;
    // cout<<++p<<endl;
    // cout<<++p<<endl;
    // cout<<++p<<endl;
    cout<<*b<<endl;
    cout<<b++<<endl;
    ̥cout<<b<<endl;
    cout<<*b<<endl;
    return 0;
}