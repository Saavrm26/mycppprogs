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
        if(n%2==1){
            for(int i=0;i<n;i++){
                cout<<i+1<<" ";
            }
            cout<<"\n";
        }
        else{
            int check=0;
            for(int i=1;i<=n/2-1;i++){
                check=check^i;
            }
            if(check==n/2){
                int ctr=0,ctr1=0,ctr2=0;
                int x= (n + n/2)/2;
                while(ctr<n){
                    // if(x%2==0){
                    //     cout<<x<<" ";
                    //     if(ctr==0){
                    //         x -=n/2;
                    //     }
                    //     else if(x%2==1){
                    //         cout<<x<<" ";
                    //         if(ctr1%2==0){
                    //             x=x + ctr1+1;
                    //         }
                    //         else{
                    //             x=x-ctr1-1;
                    //         }
                    //         ctr1++;
                    //     }
                    //     ctr++;
                    // }
                    // else{
                    //     cout<<x<<" ";
                        
                    // }
                    if(ctr==0){
                        cout<<x<<" ";
                        x -=n/2;
                    }
                    else if(ctr%2==1){
                        cout<<x<<" ";
                        if(ctr1%2==0){
                            x += ctr1+1;
                        }
                        else{
                            x -= (ctr1+1);
                        }
                        ctr1++;
                    }
                    else{
                        cout<<x<<" ";
                        if(ctr2%2==0){
                            x += n/2;                         
                        }
                        else{
                            if(x-n/2>0)
                                x -= n/2;
                            else{
                                x +=n/2;
                            }
                        }
                        ctr2++;
                    }
                
                    ctr++;
                }
            }
            else{
                cout<<-1<<"\n";
            }
            cout<<"\n";
        }
    }
}