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
#define popcnt __builtin_popcount

int main(){
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);freopen("output.txt", "w", stdout);
    #endif
    fastIO;
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        vi v(n);
        ff(i,0,n-1){
            cin>>v[i];
        }
        vi bit_count(31);
        ff(i,0,30){
            int temp=1<<i;
            ff(j,0,n-1){
                if(temp&v[j]){
                    bit_count[i]+=1;
                }
            }
        }
        int ans=0;
        fb(i,30,0){
            if(k-(n-bit_count[i])<0)
                continue;
            else{
                k-=(30-bit_count[i]);
                bit_count[i]=30-bit_count[i];
            }
            if(bit_count[i]==30){
                ans+=1<<i;
            }
        }
        cout<<ans<<"\n";
    }
}