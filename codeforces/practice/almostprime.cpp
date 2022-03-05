#include <bits/stdc++.h>
using namespace std;
int checker(int n,vector<int> spf){
    int flag=0,d=0,ctr=0;
    while(n>1){
        if(spf[n]!=d){
            d=spf[n];
            flag=1;
            ctr++;
            if(ctr>2){
                flag=0;
                break;
            }
        }
        else{
            flag=0;
            break;
        }
        n=n/d;
    }
    if(ctr!=2){
        flag=0;
    }
    return flag;
}
int main(){
    vector<int> spf(3001);
    for(int i=2;i<3001;i++){
        spf[i]=i;
    }
    spf[0]=-1;
    spf[1]=-1;
    for(int i=2;i*i<3001;i++){
        if(spf[i]==i){
            for(int j=i*i;j<3001;j=j+i){
                if(spf[j]==j){
                    spf[j]=i;
                }
            }
        }
    }
    int N;
    cin>>N;
    int ans=0;
    for(int i=2;i<=N;i++){
        int flag=0,d=0,ctr=0;
        int n=i;
        while(n>1){
            if(spf[n]!=d){
                d=spf[n];
                flag=1;
                ctr++;
                if(ctr>2){
                    flag=0;
                    break;
                }
            }
            n=n/d;
        }
        if(ctr!=2){
            flag=0;
        }
        if(flag==1){
            ans++;
        }
    }
    cout<<ans<<endl;
}