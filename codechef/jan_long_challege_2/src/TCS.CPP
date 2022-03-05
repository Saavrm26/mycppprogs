#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    string marks1="";
    string marks2="";
    cin.ignore();
    while(t--){
        getline(cin,marks1);
        getline(cin,marks2);
        int i=marks1.compare(marks2);
        if(i>0)
            cout<<"DRAGON"<<endl;
        else if(i<0)
            cout<<"SLOTH"<<endl;
        else 
            cout<<"TIE"<<endl;
    }
}
