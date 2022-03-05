#include <bits/stdc++.h>
using namespace std;

int main(){
    string s,s_rev;
    cin>>s;
    for(int i=s.length()-1;i>=0;i--){
        s_rev.push_back(s[i]);
    }
    cout<<s_rev<<endl;
    if(s==s_rev){
        cout<<"palindrome"<<endl;
    }
    else 
        cout<<" not a palindrome"<<endl;
}