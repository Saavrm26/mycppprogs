#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin>>t;
    if(t%2==1)
        cout<<-1<<endl;
    else{
        cout<<0<<" "<<0<<endl;
        cout<<0<<" "<<0+t<<endl;
        cout<<0+t/2<<" "<<0+t/2<<endl;
        cout<<0-t/2<<" "<<0+t/2<<endl;
    }
}