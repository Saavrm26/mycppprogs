#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,q;
    cin>>n>>q;
    int arr[n],odd[n],even[n];
    odd[0]=0;
    even[0]=0;
    for(int i=0;i<n;i++){
        cin>>arr[i];
        if(arr[i]%2==0){
            if(i==0){
                even[0]++;
            }
            else{
                even[i]=even[i-1]+1;
                odd[i]=odd[i-1];
            }
        }
        else{
            if(i==0){
                odd[0]++;
            }
            else{
                odd[i]=odd[i-1]+1;
                even[i]=even[i-1];
            }
        }
    }
    while(q--){
        int l,r,even_count,odd_count;
        cin>>l>>r;
        if(l!=r){   
             if(l!=1){
                odd_count=odd[r-1]-odd[l-2];
                even_count=even[r-1]-even[l-2];
                cout<<odd_count<<" "<<even_count<<endl;
            }
            else{
                cout<<odd[r-1]<<" "<<even[r-1]<<endl;
            }
        }
        else{
            if(arr[l-1]%2==0){
                even_count=1;
                odd_count=0;
            }
            else{
                odd_count =1;
                even_count=0;
            }
            cout<<odd_count<<" "<<even_count<<endl;
        }
    }
}