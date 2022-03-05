#include <bits/stdc++.h>
using namespace std;

int ppl_less_than_100(int n, int x ,int y){
    int car_smoke=0;
    if(n%4==0){
        car_smoke=(n/4)*y;
    }
    else{
        car_smoke=(n/4 + 1)*y;
    }
    if(x<=car_smoke){
        if(n==0)
            return 0;
        else
            return x;
    }
    else{
        return car_smoke;
    }
}

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,x,y;
        cin>>n>>x>>y;
        int n1= n - n%100;
        int car_smoke=(n1/4)*y;     //27
        int bus_smoke=(n1/100)*x;   //100
        int ans = min(car_smoke,bus_smoke) + ppl_less_than_100(n-n1,x,y);
        cout<<ans<<endl;
    }
}