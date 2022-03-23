#include <bits/stdc++.h>
using namespace std;

//datatype snippets
#define ll long long
//vector snippets
#define vi vector<int>
#define vll vector<long long>
#define eb emplace_back
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        vll a(n);
        ll sum=0;
        vll odd_vec,even_vec;
        for(int i=0;i<n;i++){
            cin>>a[i];
            if(a[i]%2==0)
                even_vec.eb(a[i]);
            else
                odd_vec.eb(a[i]);
        }       
        vll ans;
        if(odd_vec.size()<2){
            cout<<-1<<"\n";
            continue;
        }
        else if(even_vec.size()==0){
            if(odd_vec.size()%2==0)
                ans=a;
            else{
                cout<<-1<<"\n";
                continue;
            }
        }
        else{
            // ans.eb(odd_vec[0]);
            // ans.eb(odd_vec[1]);
            // for(int i=2,j=0,k=2;i<n;i++){
            //     // if(i%2==1){
            //     //     if(k<odd_vec.size()){
            //     //         ans.eb(odd_vec[k]);
            //     //         k++;
            //     //         continue;
            //     //     }
            //     // }
            //     // ans.eb(even_vec[j]);
            //     // j++;
            // }
            if(odd_vec.size()%2==0){
                for(int i=0;i<n;i++){
                    if(i<odd_vec.size()){
                        ans.eb(odd_vec[i]);
                    }
                    else{
                        ans.eb(even_vec[i-odd_vec.size()]);
                    }
                }
            }
            else{
                for(int i=0;i<n-1;i++){
                    if(i<(odd_vec.size()-1)){
                        ans.eb(odd_vec[i]);
                    }
                    else{
                        ans.eb(even_vec[i-(odd_vec.size()-1)]);
                    }
                }
                ans.eb(odd_vec[odd_vec.size()-1]);
            }
        }
        for(auto i:ans){
            cout<<i<<" ";
        }
        cout<<"\n";
    }
}