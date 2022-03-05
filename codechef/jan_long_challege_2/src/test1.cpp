#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    int len;
    cin>>len;
    vector<int> arr(len);
    for(int i=0;i<len;i++){
        cin>>arr[i];
    }
    
    while(t--){
        int sum=0;
        int l,r;
        cin>>l>>r;
        int sum=0;
        for(int a=l;a<r;a++){
            sum += arr[a];
        }
    cout<<sum;
    }
}
