#include <bits/stdc++.h>
using namespace std;
#define pb push_back
vector<int> adj[1001];
int ans=0;
void find_dis(int x,int n,int k){
    vector<int> dis(n+1,INT32_MAX);
    dis[x]=0;
    queue<int> q;
    q.push(x);
    while(q.size()){
        int a=q.front();
        q.pop();
        for(auto i:adj[a])if(dis[i]>1+dis[a]){
            dis[i]=1+dis[a];
            q.push(i);
        }
    }
    for(int i=x+1;i<=n;i++)if(dis[i]==k)ans++;
}
signed main(){
int n;
cin>>n;
int m,k;
cin>>m>>k;
for(int i=0;i<m;i++){
    int a,b;
    cin>>a>>b;
    adj[a].pb(b);
    adj[b].pb(a);
}
for(int i=1;i<=n;i++)find_dis(i,n,k);
cout<<ans<<endl;
}