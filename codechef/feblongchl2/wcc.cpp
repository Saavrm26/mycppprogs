#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int x;
        cin>>x;
        string s;
        cin>>s;
        int c=0,d=0,n=0;   //n chef hai and c carlson hai
        for(int i=0;i<14;i++){
            if(s[i]=='C')
                c++;
            else if(s[i]=='D')
                d++;
            else
                n++;
        }
        int chef_points=n*2+d*1;
        int carlsen_points = c*2 + d*1;
        if(chef_points>carlsen_points){
            cout<<40*x<<endl;
        }
        else if(carlsen_points>chef_points){
            cout<<60*x<<endl;
        }
        else{
            cout<<55*x<<endl;
        }
    }
}