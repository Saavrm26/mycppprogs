#include <bits/stdc++.h>
//datatype snippets
#define ll long long
//stl snippets
#define vi vector<int>
#define vll vector<long long>
#define si set<int>
#define mll map<long long,long long>
#define mi map<int,int>
#define eb emplace_back
#define mp make_pair
#define fi first
#define se second
//function snippets
ll minimum(ll a,ll b){if(a<b) return a;else return b;}
ll maximum(ll a,ll b){if(a>b) return a;else return b;}
ll absolute(ll a){if(a>=0)return a;else return a*-1;}
#define yes cout<<"YES\n"
#define no cout<<"NO\n"
using namespace std;

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
        mi m;
        for(int i=0;i<n;i++){
            cin>>vec[i];
            m[vec[i]]++;
        }
        si s;
        vi ans;
        int mex;
        // if(vec[0]==0)
        //     mex=1;
        // else
            mex=0;
        for(int i=0;i<n;i++){
            int t=s.size();
            s.insert(vec[i]);
            if(m[mex]>0||s.find(mex)!=s.end()){
                if(mex==s.size())
                    mex++;
                if(i==n-1){
                    ans.eb(mex);mex=0;
                    s.clear();
                }
                m[vec[i]]--;
            }
            else{
                // m.erase(((*it)+1))
                ans.eb(mex);
                mex=0;
                // s.clear();
                // // // s.insert(vec[i]);
                // // if(i+1<n){
                // //     if(vec[i+1]==0)
                // //         mex=1;
                // //     else
                // //         mex=0;
                // // }
                // s.clear();
                // i--;
                // if(vec[i+1]==0)
                //     mex=1;
                // else
                //     mex=0;
            
            }
        }
        
        cout<<ans.size()<<"\n";
        for(int i=0;i<ans.size();i++){
            cout<<ans[i]<<" ";
        }
        cout<<"\n";
    }
}