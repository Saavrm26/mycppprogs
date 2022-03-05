#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,x;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"enter element to be found"<<endl;
    cin>>x;
    int k=0,max=arr[0],min=arr[0],flag1=0,flag2=0,ctr1=0,ctr2=0;
    for(int i=0;i<n;i++){
        if(arr[i]==x){
            cout<<"Element found";
        }
        if(arr[i]>x){
            k++;
        }
        if(arr[i]>max){
            max=arr[i];
            flag1=1;
            ctr1++;
        }
        else {
            ctr1=0;
            flag1=0;
        }
        if(arr[i]<min){
            min=arr[i];
            flag2=1;
        }
        else {
            ctr2=0;
            flag2=0;
        }
        if(arr[i]==min&&flag1==1){
            ctr2++;
        }
        else{
            ctr2=0;
        } 
        if(arr[i]==max&&flag2==1){
            ctr1++;
        }
        else{
            ctr1=0;
        }   
    }
    cout<<k <<"\n"<< ctr1<<"\n" <<"\n" << ctr2;
}