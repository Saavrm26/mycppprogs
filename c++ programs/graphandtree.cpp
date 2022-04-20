#include <bits/stdc++.h>
using namespace std;

//datatype snippets
typedef long long ll;
//stl snippets
typedef vector<int> vi;
typedef vector<long long> vll;
typedef vector<bool> vb;
typedef vector<pair<int,int>> vpii;
typedef vector<pair<long long,long long>> vpll;
typedef vector<vector<int>> vvi;
typedef vector<vector<long long>> vvll;
typedef set<int> si;
typedef map<int,int> mii;
typedef map<long long,long long> mll;
#define eb emplace_back
#define mp make_pair
#define fi first
#define se second
//io snippets
#define yes cout<<"YES\n"
#define no cout<<"NO\n"
#define fastIO ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
// loop snippets
#define ff(i,init,fin) for(int i=init;i<=fin;i++)
#define fb(i,init,fin) for(int i=init;i>=fin;i--)
#define ffs(i,init,fin,step) for(int i=init;i<=fin;i=i+step)
#define fbs(i,init,fin,step) for(int i=init;i>=fin;i=i-step)
//function snippets
ll minimum(ll a,ll b){if(a<b) return a;else return b;}
ll maximum(ll a,ll b){if(a>b) return a;else return b;}
ll absolute(ll a){if(a>=0)return a;else return a*-1;}
ll lcm (ll a, ll b) {return a / gcd(a, b) * b;}

void dfs(int node,vi adj[],vb &vis){
    // for(int i=0;i<adj[node].size();i++){
    //     if(vis[node][i]!=1)
    //         dfs(adj[node][i],adj,vis)
    // }
    vis[node]= true;

}

int main(){
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);freopen("output.txt", "w", stdout);
    #endif
    fastIO;
    int n,m;
    cin>>n>>m;
    vi adj[n+1];
    ff(i,0,m-1){
        int u,v;
        cin>>u>>v;
        adj[u].eb(v);
        adj[v].eb(u);
    }
    vb vis(n+1,0);
    int ctr=0;
    ff(node,1,n){
        if(!vis[node]) dfs(node,adj,vis) , ctr++;
    }
}


