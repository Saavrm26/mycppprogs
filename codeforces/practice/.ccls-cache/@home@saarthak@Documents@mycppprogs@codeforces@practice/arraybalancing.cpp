#include <bits/stdc++.h>
//datatype snippets
#define ll long long
//stl snippets
#define vi vector<int>
#define vll vector<long long>
#define vpii vector<pair<int,int>>
#define vpll vector<pair<long long,long long>>
#define vvi vector<vector<int>>
#define vvll vector<vector<long long>>
#define si set<int>
#define mii map<int,int>
#define mll map<long long,long long>
#define eb emplace_back
#define mp make_pair
#define fi first
#define se second
//function snippets
ll minimum(ll a,ll b){if(a<b) return a;else return b;}
ll maximum(ll a,ll b){if(a>b) return a;else return b;}
ll absolute(ll a){if(a>=0)return a;else return a*-1;}
//io snippets
#define yes cout<<"YES\n"
#define no cout<<"NO\n"
#define fastIO ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
// loop snippets
#define ff(i,init,fin) for(int i=init;i<=fin;i++)
#define fb(i,init,fin) for(int i=init;i>=fin;i--)
#define ffs(i,init,fin,step) for(int i=init;i<=fin;i=i+step)
#define fbs(i,init,fin,step) for(int i=init;i>=fin;i=i-step)
using namespace std;

int main(){
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);freopen("output.txt", "w", stdout);
    #endif
    fastIO;
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vll a(n),b(n);
        ff(i,0,n-1){
            cin>>a[i];
        }
        ff(i,0,n-1){
            cin>>b[i];
        }
        ll ans=0;
        for(int i=0;i<n-1;i++){
            ll x=(b[i+1]-b[i]);
            ll y=(a[i+1]-a[i]);
            if((x>=0&&y>=0)||(x<0&&y<0)){
                ans += absolute(x+y);
            }
            else{
                int p = absolute(a[i]-b[i+1]);
                int q = absolute(b[i]-a[i+1]);
                ans += minimum(absolute(x)+absolute(y),p+q);
            }
        }
        cout<<ans<<"\n";
    }
}