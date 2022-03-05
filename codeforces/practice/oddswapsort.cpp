#include <bits/stdc++.h>
using namespace std;
#define vi vector<int>
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vi vec(n);
        vi odd_vec;
        vi even_vec;
        for(int i=0;i<n;i++){
            cin>>vec[i];
            if(vec[i]%2==0)
                even_vec.push_back(vec[i]);
            else
                odd_vec.push_back(vec[i]);
        }
        int odd_flag=1,even_flag=1;
        if(even_vec.size()>0){
            for(int i=0;i<even_vec.size()-1;i++){
                
                if(even_vec[i]>even_vec[i+1]){
                    even_flag=0;
                    break;
                }
                
            }
        }
        if(odd_vec.size()>0){
            for(int i=0;i<odd_vec.size()-1;i++){
            
                if(odd_vec[i]>odd_vec[i+1]){
                    odd_flag=0;
                    break;
                }
                
            }
        }
        if(even_flag&&odd_flag){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
}