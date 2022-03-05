#include <bits/stdc++.h>
using namespace std;


int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> boys(n);
        vector<int> girls(n);
        vector<int> correct(n,0);
        vector<pair<int,int>> vec;
        for(int i=0;i<n;i++)
            cin>>boys[i];
        for(int i=0;i<n;i++){
            cin>>girls[i];
            if(boys[i]==girls[i])
                correct[i]=1;
        }
        int ctr=0,flag=0,ans=0,corner=0;
        if(n%2==1&&girls[(n+1)/2]==boys[(n+1)/2]){
            cout<<-1<<endl;
        }
        else{
            for(int i=0;i<n/2;i++){
                if(correct[i]==0){     //consecutive and non consecutive correct values
                    if(boys[i]==girls[n-1-i]){
                        flag=0;
                        if(i==0){
                            ctr++;
                        }
                        else{
                            ctr++;
                            if(i==n/2-1)
                                corner=1;
                        }
                    }
                    else{
                        ans=-1;
                        break;
                    }
                }else if(flag==0){
                    vec.push_back({ctr,corner});
                    ctr=0;
                    flag=1;
                }
            }
            if(flag==0)
                vec.push_back({ctr,corner});
            if(ans==-1){
                cout<<-1<<endl;
            }
            else{

                for(int i=0;i<vec.size();i++){
                    if(vec[i].first!=0){    
                        if(vec[i].first==1){
                            ans += 2;
                            if(vec[i].second==1){
                                ans=ans-1;
                            }
                        }
                        else{
                            if(vec[i].second==0)
                                ans+=2;
                            else{
                                ans+=1;
                            }
                        }
                    }
                }
                // if(corner==1){
                //     cout<<ans-1<<endl;
                // }
                // else{
                //     cout<<ans<<endl;
                // }
                cout<<ans<<endl;
            }
        }        
    }
}