#include <bits/stdc++.h>
using namespace std;

#define vi vector<int>
#define ll long long
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        string str;
        cin>>str;
        char key;
        cin>>key;
        int flag=0;
        for(int i=0;i<str.length();i++){
            if(i%2==0){
                if(str[i]==key){
                    flag=1;
                    break;
                }
            }
        }
        if(flag) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
}