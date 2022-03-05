#include <bits/stdc++.h>

using namespace std;
int main(){
    string str="";
    cin>>str;
    int i=str.find("o");
    if((str.substr(0,i)).length()*2==(str.substr(i)).length()){
        cout<<"Yes";
    }
    else 
        cout << "No";
}