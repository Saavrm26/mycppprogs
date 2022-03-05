#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,flag=1,x,sum=0;
    cin>>n;

    int rev_arr[n],arr[n];
    for(int i=0;i<n;i++){
        cin>>x;
        rev_arr[n-1-i]=x;
        arr[i]=x;
        sum=sum+x;
    }
    for(int i=0;i<n;i++){
        cout<<rev_arr[i]<<" ";
        if(rev_arr[i]==arr[i]&&flag!=0){
            flag=1;
        }
        else {
            flag=0;
        }
    }
    if(flag==1){
        cout<<"palindrome";
    }
    else 
        cout<<" not a palindrome";
    cout<<sum;
    
}