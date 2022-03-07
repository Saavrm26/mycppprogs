#include <bits/stdc++.h>
using namespace std;

#define vi vector<int>
#define ll long long
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int max=INT32_MIN,ctr=0;
        vi vec(n);
        ll sum=0;
        for(int i=0;i<n;i++){
            cin>>vec[i];
            if(vec[i]>max){
                max=vec[i];
                ctr++;
            }
            sum += vec[i];
        }
        sum = sum - max;
        // for(int i=0;i<n;i++){
        //     if(vec[i]!=max){
        //         sum += vec[i];
        //     }
        // }
        if(sum<max){
            
            cout<<1+ (max-sum)/(n-1) + ((max-sum)%(n-1) ? 1 : 0)<<"\n" ;
            
        }
        else{
            if(max!=0)
                cout<<"1\n";
            else
                cout<<"0\n";
        }
    }
}