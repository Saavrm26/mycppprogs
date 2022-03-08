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
        ll a,s,b;
        cin>>a>>s;
        ll x=10,y=1,flag = 0;
        ll S=s;
        b=0;
        while(S>0){
            x=10;
            int rem=S%x;
            if(rem<a%x){
                rem = S%(x*10);
                if(rem<a%x){
                    flag=-1;
                    break;
                }
                if((rem-a%x)/10==0)
                b += (rem-a%x)*y;
                else{
                    flag=-1;
                    break;
                }     
                x *=10;
            }
            else{
                if((rem-a%x)/10==0)
                    b += (rem-a%x)*y;
                else{
                    flag=-1;
                    break;
                }
            }
            S=S/x;
            // cout<<"#S is "<<S<<endl;
            a=a/(10);
            y *= 10;
            if(S==0 && a!=0){
                flag=-1;
            }
        }
        if(flag==0)
            cout<<b<<endl;
        else{
            cout<<-1<<endl;
        }
    }
    return 0;
}