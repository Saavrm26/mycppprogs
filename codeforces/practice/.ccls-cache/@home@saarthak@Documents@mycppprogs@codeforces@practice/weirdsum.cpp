#include <bits/stdc++.h>
//datatype snippets
#define ll long long
//vector snippets
#define vi vector<int>
#define vll vector<long long>
#define mll map<long long,long long>
#define eb emplace_back
#define mp make_pair
#define fi first
#define se second
//function snippets
ll minimum(ll a,ll b){if(a<b) return a;else return b;}
ll maximum(ll a,ll b){if(a>b) return a;else return b;}
ll absolute(ll a){if(a>=0)return a;else return a*-1;}
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n,m;
    cin>>n>>m;
    map <int,vector<pair<int,int>>> colors;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            int x;
            cin>>x;
            colors[x].eb(mp(i+1,j+1));
        }
    }
    ll ans=0;
    for(auto it=colors.begin();it!=colors.end();it++){
        int l=((*it).second).size();
        for(int i=0;i<l-1;i++){
            for(int j=i+1;j<l;j++){
                ans+= absolute((*it).se[i].fi - (*it).se[j].fi) + absolute((*it).se[i].se - (*it).se[j].se);
            }
        }
    }
    cout<<ans<<"\n";
}