#include <bits/stdc++.h>

using namespace std;
int main(){
    int t;
    cin>>t;
    if(1<=t&&t<=100){
        while(t--){
            int N,K;
            cin>>N >> K;
            if((1<=N&&N<=300000)&&(1<=K&&K<=1e9)){
                int arr1[N],arr2[N];
                iota(arr1,arr1+N,1);
                copy(arr1,arr1+N,arr2);
                int l=0;
                while(1){
                    int flag=0;
                    for(int i=0,k=1;i<N/2;i++,k+=2){
                        arr2[i]=arr1[k-1];
                        arr2[i+N/2]=arr1[k];
                    }
                    l++;
                    copy(arr2,arr2+N,arr1);
                    if(l==K){
                        break;
                    }
                    
                    if(arr2[1]==2){
                        K=K-l;
                        break;
                    }
                }
                int q = (K)%l;
                if(q<=l/2){
                        while(q>0){
                        for(int i=0,k=1;i<N/2;i++,k+=2){
                            arr2[i]=arr1[k-1];
                            arr2[i+N/2]=arr1[k];
                        }
                        copy(arr2,arr2+N,arr1);
                        q--;
                    }
                }
                else{
                    q=l-q;
                    while(q--){
                        for(int i=0,k=1;i<N/2;i++,k+=2){
                            arr2[k-1]=arr1[i];
                            arr2[k]=arr1[N/2 + i];
                        }
                        copy(arr2,arr2+N,arr1);
                    }
                }
                for(int i : arr1){
                    cout<<i<<" ";
                }
                cout<<endl;
            }
        }
    }
}