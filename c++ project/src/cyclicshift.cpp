#include <bits/stdc++.h>

using namespace std;
int main(){
    int t;
    cin>>t;
    int arr[t];
    int j=0;
    while(j<t){
        int N,K;
        cin >> N >> K;
        string bn;
        cin>>bn;
        int i=0;
        if(bn[0]!='1'){
            i=bn.find('1')-1;
            bn=bn.substr(i)+bn.substr(0,i);
        }
        string max_bn=bn;
        int ctr=0,k=0;
        for(i=i+1;i<N+1;i++){
            bn=bn.substr(1)+bn.substr(0,1);
            if(bn[0]=='1'){
                if(max_bn.compare(bn)<0){
                    max_bn=bn;
                    ctr=i;
                }
            }
        }
        k++;
        bn=max_bn;
        for(;k<K;ctr++){
            bn=bn.substr(1)+bn.substr(0,1);
            if(max_bn.compare(bn)==0){
                k++;
            }
        }
        arr[j]=ctr;
        j++;
    }
    for(const auto &val : arr){
        cout<<val<<endl;
    }
    return 0;
}