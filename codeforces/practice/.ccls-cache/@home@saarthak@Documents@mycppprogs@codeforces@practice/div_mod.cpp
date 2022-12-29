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
        long long l,r,a;
        cin>>l>>r>>a;
        if(l/a==r/a)
            cout<<r/a+r%a<<endl;
        else{
            // if(r/a>a-1){
            //     cout<< r/a - 1 +  r%a; 
            // }
            // else{
            //     cout<< r/a -1 + r%a;
            // }
            if(a!=1)
                if(r%a != a-1)
                    cout<< r/a -1 + a - 1<<endl;
                else{
                    cout<< r/a + r%a<<endl;
                }
            else
                cout<<r<<endl;
        }
    }
}