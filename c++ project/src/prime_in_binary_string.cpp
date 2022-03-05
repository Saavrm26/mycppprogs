#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    int sum=0;
    if(1<=t&&t<=25000){
        while(t--){
            string s;
            cin>>s;
            int l=s.length();
            sum +=l;
            if(sum<=300000){
                if(1<l){
                    int i=s.find('1');
                    if(i>=0){
                        if(i==l-1){
                            cout<<"No"<<endl;
                        }
                        else
                            cout<<"Yes"<<endl;
                    }
                    else 
                        cout<<"No"<<endl;
                }
                else
                    cout<<"No"<<endl;
            }
        }
   }
}