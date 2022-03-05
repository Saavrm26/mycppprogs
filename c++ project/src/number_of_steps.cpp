#include <bits/stdc++.h>

using namespace std;
int main(){
    int N;
    cin>>N;
    int a[N],b[N],temp=0;
    for(short j=0;j<N;j++){
        cin>>a[j];
    }
    temp=a[0];
    for(short j=0;j<N;j++){
        cin>>b[j];
    }
    int Mini=0,ctr=0,flag=0;
    for(short i=1;i<N;i++){
        // if(a[i]>0)
        // {
            if(a[i]/(double)a[0]==1){
                continue;
            }
            else if(a[i]>=b[i]){
                int n=(a[i]-a[0]);
                if(n%b[i]==0){
                    ctr += n/b[i];
                }
                else{
                    ctr=0;
                    i=0;
                    if(a[0]>b[0]){
                        a[0]=a[0]-b[0];
                        ctr=(temp-a[0])/b[0];
                        continue;
                    }
                    else{
                        cout<<"-1"<<endl;
                        return 0;
                    }
                }
            }
            if(i==N-1){
                    if(flag==0){
                        Mini=ctr;
                        flag++;
                    }            
                    else if(Mini>ctr){
                        Mini=ctr;
                    }
                }
        // }
        // else
        //     return 0;
    }
    if(Mini>0){
        cout<<Mini;
    }
}