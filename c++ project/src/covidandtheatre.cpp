#include <bits/stdc++.h>

using namespace std;
int main(){
    int t;
    cin>>t;
    string output="";
    while(t>0){    
        
        int n , m,seats,mult=1;
        cin>> n >> m;
        if(n%2!=0){
            mult=(n/2)+1;
        }
        else{
            mult=(n/2);
        }
        if(m%2==0){
            seats=mult*(m/2);
        }
        else{
            seats=mult*((m/2)+1);
        }
        output += to_string(seats) + "\n";
        t--;
    }
    
}