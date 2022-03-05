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
    vector<int> spf(201);
    for(int i=2;i<201;i++){
        spf[i]=i;
    }
    spf[0]=-1;
    spf[1]=-1;
    for(int i=2;i*i<201;i++){
        if(spf[i]==i){
            for(int j=i*i;j<201;j=j+i){
                if(spf[j]==j){
                    spf[j]=i;
                }
            }
        }
    }
    int t;
    cin>>t;
    while(t--){
        int N;
        cin>>N;
        int flag=0;
        for(int n=2;n<=N/2;n++){
            flag=checker(n,spf);
            if(flag==1){
                flag=checker(N-n,spf);
                if(flag==1){
                    break;
                }
                else{
                    continue;
                }
            }
            else{
                continue;
            }
        }
        if(flag==1){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
}