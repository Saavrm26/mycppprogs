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
        for(int i=0;i<n;i++){
            cin>>vec[i];
        }
        if(vec[n-1]<vec[n-2])
            cout<<-1<<endl;
        else{
            if(vec[n-1]>=0){
                cout<<n-2<<"\n";
                for(int i=0;i<n-2;i++){
                    vec[i]=vec[n-2]-vec[n-1];
                    cout<<i+1<<" "<<n-1<<" "<<n<<"\n";
                }
            }
            else{
                auto v=vec;
                sort(v.begin(),v.end());
                int flag=1;
                for(int i=0;i<n;i++){
                    if(vec[i]==v[i])
                        flag=1;
                    else{
                        flag=0;
                        break;
                    }
                }
                if(flag)
                    cout<<0<<"\n";
                else{
                   cout<<-1<<"\n";
                }    
            }
            
        }
    }
}