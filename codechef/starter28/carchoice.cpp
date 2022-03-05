#include <bits/stdc++.h>
using namespace std;

#define vi vector<int>
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        float x1,x2,y1,y2;
        cin>>x1>>x2>>y1>>y2;
        if(y1/x1<y2/x2){
            cout<<-1<<endl;
        }
        else if(y1/x1==y2/x2){
            cout<<0<<endl;
        }
        else{
            cout<<1<<endl;
        }
    }
}