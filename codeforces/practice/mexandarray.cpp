#include <bits/stdc++.h>
using namespace std;
// int check(vector<int> vec , int i , int j,int mex){
//     int flag=0;
//     for(int k=i;k<j;k++){
//         if(vec[k]==mex){
//                 flag=1;
//                 break;
//         }
//     }
//     if(flag){
//         // cout<<mex<<endl;
//         mex=check(vec,i,j,mex+1);
//     }
//     return mex;
// }
// int MEX(vector<int> vec,int i,int j){
//     int mex,mini=*(vec.begin()+i);
//     for(auto it=vec.begin()+i;it<vec.begin()+j;it++){
//             mini=min(mini,*it);    
//     }
//     // cout<<mini<<endl;
//     if(mini==0){
//         mex=mini+1;
//         mex=check(vec , i , j,mex);
//     }
//     else{
//         mex=0;
//     }
//     return mex;
// }

// int main(){
//     int t;
//     cin>>t;
//     while(t--){
//         int n;
//         cin>>n;
//         int ans=0;
//         vector<int> vec(n);
//         for(int i=0;i<n;i++){
//             cin>>vec[i];
//         }
//         for(int i=0;i<n;i++){
//             for(int j=1;j<=n-i;j++){
//                 ans += j + MEX(vec,i,i+j);
//                 cout<<ans<<endl;
//             }
//         }        
//         // cout<<ans<<endl;
//     }
// }

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> vec(n);
        for(int i=0;i<n;i++){
            cin>>vec[i];
        }
        int ans=0;
        for(int i=0;i<n;i++){
            for(int j=1;j<=n-i;j++){
                for(int k=i;k<i+j;k++){
                    if(vec[k]==0){
                        ans += 2;
                    }  
                    else{
                        ans += 1;
                    }
                } 
            }
        }
        cout<<ans<<endl;
    }
}