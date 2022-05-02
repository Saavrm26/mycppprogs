#include <bits/stdc++.h>
using namespace std;

//datatype snippets
typedef long long ll;
//stl snippets
typedef vector<int> vi;
typedef vector<long long> vll;
typedef vector<pair<int,int>> vpii;
typedef vector<pair<long long,long long>> vpll;
typedef vector<vector<int>> vvi;
typedef vector<vector<long long>> vvll;
typedef set<int> si;
typedef set<ll> sll;

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
ll binpow(ll a, ll b) {ll res = 1;while (b > 0) { if (b & 1) res = res * a;a = a * a;b >>= 1;}return res;}
ll mod_sub(ll a,ll b){ll mod=1e9+7;return ((a-b)%mod + mod) % mod;}

int main(){

    fastIO;
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vi v(n);

        ff(i,0,n-1){
            cin>>v[i];
        }
        auto v2=v;
        sort(v.begin(),v.end());
        map<int,int> m;
        int x=1;
        ff(i,0,n-1){
            if(m[v[i]]==0){
                m[v[i]]=x;
                x++;
            }
            else
                continue;
        }
        ff(i,0,n-1){
            cout<<m[v2[i]]<<" ";
        }
        cout<<"\n";
    }
}