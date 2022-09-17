#include <bits/stdc++.h>
using namespace std;

const int N=1e5;
int n,k;
vector<int> v;
vector<int> adj[N+1];
int bfs(int node){
    vector<bool> vis(N+1);
    queue<int> q,lev;
    q.push(node);
    lev.push(0);
    vis[node]=1;
    int ans=0;
    while(!(q.empty())){
        int par=q.front();
        vis[par]=1;
        int parlev=lev.front();
        if(parlev==k){
            ans++;
        }
        q.pop();
        lev.pop();

        for(int i=0;i<adj[par].size();i++){
            int child=adj[par][i];
            if(!vis[child]){
                lev.push(parlev+1);
                q.push(child);
            }
        }
    }
    return ans;
}

int main(){
//    #ifndef ONLINE_JUDGE
//     freopen("input.txt", "r", stdin);freopen("output.txt", "w", stdout);
//    #endif
    
    cin>>n>>k;
    set<int> V;
    for(int i=0;i<n;i++){
        int u,v;
        cin>>u>>v;
        adj[u].emplace_back(v);
        adj[v].emplace_back(u);
        V.insert(u);
        V.insert(v);
    }
    set<int>::iterator itr=V.begin();
    // vertices
    for(;itr!=V.end();itr++){
        v.emplace_back((*itr));
    }
    int nn=v.size();
    long long ans=0;
    for(int i=0;i<nn;i++){
        ans+=bfs(v[i]);
    }
    cout<<ans/2<<'\n';
}