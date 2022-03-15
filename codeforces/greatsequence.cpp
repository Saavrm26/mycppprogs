#include <bits/stdc++.h>
using namespace std;

#define vi vector<int>
#define ll long long
#define vll vector<long long>
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        ll n,x;
        cin>>n>>x;
        vll vec(n);
        map<ll , ll> m;
        for(int i=0;i<n;i++){
            cin>>vec[i];
            m[vec[i]]++;
        }
        int ans=0;
        sort(vec.begin(),vec.end());
        for(int i=0;i<n;i++){
            if(m[vec[i]*x]>0&&m[vec[i]]!=-1){
                m[vec[i]]--;
                m[vec[i]*x]--;
                if(m[vec[i]*x]==0)
                    m[vec[i]*x]=-1;
                if(m[vec[i]]==0)
                    m[vec[i]]=-1;
            }
            else{
                if(m[vec[i]]==-1)
                    continue;
                ans++;
                m[vec[i]]--;
                if(m[vec[i]]==0)
                    m[vec[i]]=-1;
            }
        }
        cout<<ans<<"\n";
    }
}