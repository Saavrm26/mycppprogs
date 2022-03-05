#include <bits/stdc++.h>

using namespace std;

int main(){
    int N;
    cin>>N;
    int a[N],b[N];
    for(short j=0;j<N;j++){
        cin>>a[j];
    }
    for(short j=0;j<N;j++){
        cin>>b[j];
    }
    int cp[N],ctr=0,mini=0,flag=0;
    copy(a,a+N,cp);
    while(a[0]>0){
        flag=0,ctr=0;
        for(int i=1;i<N && flag==0;i++){   
            if(a[i]==a[0]){
                continue;
            }
            else if(a[i]>=b[i]){
                while(a[i]>=b[i]){
                    a[i]=a[i]-b[i];
                    ctr++;
                    if(a[i]==a[0]){
                        
                        break;
                    }
                }
            }
        }
        if(a[0]==cp[0]){
            mini=ctr;
        }
        if(mini>ctr){
            mini=ctr;
        }
        if(a[0]>b[0]){
            a[0] -= b[0];
            copy(cp+1,cp+N,a+1);
        }
        else break;
    }
    if(mini!=0){
        cout<<mini;
    }
    else cout <<'-1';
}