#include <bits/stdc++.h>
using namespace std;
int linear_max(vector<int> vec){
    int n=vec.size();
    int max=INT32_MIN;
    int max_index;
    for(int i=0;i<n;i++){
        if(vec[i]>max){
            max=vec[i];
            max_index=i;
        }
        
    }
    return max_index;
}
int linear_min(int arr[],int n){
    int min=INT32_MAX;
    for(int i=0;i<n;i++){
        if(arr[i]<min){
            min=arr[i];
        }
        return min;
    }
}
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int arr[n],lsb[n],_0_starting=0,_1_starting=0; //_[01]_starting tell how many correct elements are present.
        vector<int> last_0;
        vector<int> last_1;
        for(int i=0;i<n;i++){
            cin>>arr[i];
            lsb[i]=arr[i]&1;
            if(lsb[i]==0){
                last_0.push_back(i);
            }
            else{
                last_1.push_back(i);
            }
            if(i%2==0){
                if(lsb[i]%2==0)
                {
                    _0_starting++;
                }
                else{
                    _1_starting++;
                }
            }
            else{
                if(lsb[i]%2==0)
                {
                    _1_starting++;
                }
                else{
                    _0_starting++;
                }
            }
        }
        int min_last1=linear_min(last_1);
        int min_last0=linear_min(last_0);
        if((_0_starting<_1_starting)&&_1_starting!=0 ){
            cout<<n-_1_starting<<endl;
            for(int i=0;i<n;i++){
                if(i==last_1[min_last0]){
                    auto x=
                    min_last0=
                }
                if(i==last_0){
                    last_0=1;
                }
                if(i%2==0){
                    if(lsb[i]!=1){
                        arr[i] = arr[i]^arr[last_1];
                        cout<<i+1<<" "<<last_1+1<<endl;
                    }
                }
                else{
                    if(lsb[i]!=0){
                        arr[i] = arr[i]^arr[last_0];
                        cout<<i+1<<" "<<last_0+1<<endl;
                    }
                }
            }
        }
        else if((_1_starting<=_0_starting)&&_0_starting!=0){
            cout<<n-_0_starting<<endl;
            for(int i=0;i<n;i++){
                if(i==last_1){
                    last_1=1;
                }
                if(i==last_0){
                    last_0=0;
                }
                if(i%2==0){
                    if(arr[i]!=0){
                        // arr[i] = arr[i]^arr[last_0];
                        cout<<i<<" "<<last_0<<endl;
                    }
                }
                else{
                    if(arr[i]!=1){
                        // arr[i] = arr[i]^arr[last_1];
                        cout<<i<<" "<<last_1<<endl;
                    }
                }
            }
            cout<<endl;
            
        }
        else{
            cout<<-1<<endl;
        }
    }
}