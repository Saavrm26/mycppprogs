#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int num=n;
        int arr[n];
        int i=0,flag=0;
        while(1){
            int rem=num%10;
            arr[i]=rem;
            num=num/10;
            if(num!=0) i++;
            else break;
        }
        for(;i>=0;i--){
            if(arr[i]==6&&flag==0){
                arr[i]=9;
                flag++;
            }
            cout<<arr[i];
        }
        cout<<endl;
    }   
}