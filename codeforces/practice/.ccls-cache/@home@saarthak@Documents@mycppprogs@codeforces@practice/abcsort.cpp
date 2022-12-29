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
typedef map<int,int> mii;
typedef map<long long,long long> mll;
#define eb emplace_back
#define mp make_pair
#define lb lower_bound
#define ub upper_bound
#define fi first
#define se second
//io snippets
#define yes cout<<"YES\n"
#define no cout<<"NO\n"
#define fastIO ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define ini(x) int x;cin>>x;
#define inll(x) ll x;cin>>x;
#define ins(x) string x;cin>>x;
#define invi(x,n) vi x(n);ff(i,0,n-1) cin>>x[i];
#define invll(x,n) vll x(n);ff(i,0,n-1) cin>>x[i];
// loop snippets
#define ff(i,init,fin) for(int i=init;i<=fin;i++)
#define fb(i,init,fin) for(int i=init;i>=fin;i--)
#define ffs(i,init,fin,step) for(int i=init;i<=fin;i=i+step)
#define fbs(i,init,fin,step) for(int i=init;i>=fin;i=i-step)
#define popcnt __builtin_popcount
//function snippets
ll minimum(ll a,ll b){if(a<b) return a;else return b;}
ll maximum(ll a,ll b){if(a>b) return a;else return b;}
ll absolute(ll a){if(a>=0)return a;else return a*-1;}
ll lcm (ll a, ll b) {return a / gcd(a, b) * b;}
ll mod_sub(ll a,ll b){ll mod=1e9+7;return ((a-b)%mod + mod) % mod;}
ll binpow(ll a, ll b) {ll res = 1;while (b > 0) {if (b & 1) res = res * a;a = a * a;b >>= 1;}return res;}

int main(){
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);freopen("output.txt", "w", stdout);
    #endif
    fastIO;
    int t;
    cin>>t;
    while(t--){
        ini(n)
        invi(v,n)
        auto x=v;
        sort(x.begin(),x.end());
        if(n%2){
            if(n!=1){
                // auto v1=v;
                // ff(i,0,(n-2)/2){
                //     if(v1[i*2]>v1[i*2+1]){
                //         swap(v1[i*2],v1[i*2+1]);
                //     }
                // }
                // bool f=1;
                // ff(i,0,n-1){
                //     if(v1[i]!=x[i]){
                //         f=0;break;
                //     }
                // }
                // if(f) yes;
                // else{
                    auto v2=v;
                    ff(i,1,(n-1)/2){
                        if(v2[i*2]<v2[i*2-1]){
                            swap(v2[i*2],v2[i*2-1]);
                        }
                    }
                    bool f2=1;
                    ff(i,0,n-1){
                        if(v2[i]!=x[i]){
                            f2=0;break;
                        }
                    }
                    if(f2) cout<<"YES\n";
                    else cout<<"NO\n";
                // }
            }
            else{
                yes;
            }
        }
        else{
            ff(i,0,(n-1)/2){
                if(v[i*2]>v[i*2+1]){
                    swap(v[i*2],v[i*2+1]);
                }
            }
            bool f=1;
            ff(i,0,n-1){
                if(v[i]!=x[i]){
                    f=0;break;
                }
            }
            if(f) yes;
            else no;
        }
    }
}