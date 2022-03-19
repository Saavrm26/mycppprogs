#include <bits/stdc++.h>
using namespace std;
#define vi vector<int> 
int main(){
    int n,s;
    cin>>n>>s;
    vi vec(n);
    for(int i=0;i<n;i++){
        cin>>vec[i];
    }
    bool flag=0;
    for(int mask=0;mask<(1<<n);mask++){
        int sub_sub=0;
        for(int i=0;i<n;i++){
            if(mask&(1<<i))
                sub_sub += vec[i];
        }
        if(sub_sub==s){
            flag=1;
            break;
        }
    }
    if(flag)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
    
}