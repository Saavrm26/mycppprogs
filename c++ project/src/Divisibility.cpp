#include <bits/stdc++.h>
using namespace std;

int main(){
    string l;
    getline(cin,l);
    string input;
    getline(cin,input);
    if(input[input.length()-1]=='0'){
        cout<<"Yes";
    }
    else
        cout<<"No";
    return 0;
}