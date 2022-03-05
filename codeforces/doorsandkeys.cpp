#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        int key=s.find('r'),door=s.find('R');
        if(key<door){
            key=s.find('g');
            door=s.find('G');
            if(key<door){
                key=s.find('b');
                door=s.find('B');
                if(key<door){
                    cout<<"YES"<<endl;
                }
                else{
                    cout<<"NO"<<endl;
                }
            }
            else{
                cout<<"NO"<<endl;
            }
        }   
        else{
            cout<<"NO"<<endl;
        }    
    }
}