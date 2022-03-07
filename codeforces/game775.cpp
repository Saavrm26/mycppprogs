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
        vi ctr;
        int c=0;
        vector<pair<int,int>> counter_0;
        for(int i=0;i<n;i++){
            cin>>vec[i];
            
        }
        for(int i=0;i<n;i++){
            if(vec[i]==0){        //
                ctr.push_back(i);
                c++;
            }
            else{
                if(c!=0){
                    counter_0.push_back(make_pair(i-c-1,i));
                    c=0;
                }

            }
        }

        // for(int i=1;i<ctr.size()-1;i++){   //
        //     if(ctr[i]-ctr[i-1]!=1){
        //         c++;
        //     }
        //     else{
        //         if(c!=0){
        //             counter_0.push_back(c);
        //             c=0;
        //         }

        //     }
        // }
        if(counter_0.size()==1){
            cout<<counter_0[0].second-counter_0[0].first<<"\n";
        }
        else if(counter_0.size()==0){
            cout<<0<<"\n";
        }
        else{
            cout<<counter_0[counter_0.size()-1].second - counter_0[0].first<<"\n";
        }
    }
}