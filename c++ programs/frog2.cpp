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
#define popcnt __builtin_popcount
//function snippets
ll minimum(ll a,ll b){if(a<b) return a;else return b;}
ll maximum(ll a,ll b){if(a>b) return a;else return b;}
ll absolute(ll a){if(a>=0)return a;else return a*-1;}
ll lcm (ll a, ll b) {return a / gcd(a, b) * b;}
ll mod_sub(ll a,ll b){ll mod=1e9+7;return ((a-b)%mod + mod) % mod;}

int main(){
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);freopen("output.txt", "w", stdout);
    #endif
    fastIO;
    int n,k;
    cin >> n >> k;
    vi h(n);
    ff(i,0,n-1){
        cin>>h[i];
    }
    vi dp(n,0);
    ff(i,1,n-1){
        if(i<k){
            dp[i]=dp[0]+abs(h[i]-h[0]);
            ff(j,0,i-1){
                dp[i]=min(dp[j]+abs(h[i]-h[j]),dp[i]);
            }
        }
        else{
            dp[i]=dp[i-k]+abs(h[i]-h[i-k]);
            ff(j,i-k,i-1){
                dp[i]=min(dp[j]+abs(h[i]-h[j]),dp[i]);
            }
        }
    }
    ff(i,0,n-1){
        cout<<dp[i]<<" ";
    }
    cout<<"\n";
    cout<<dp[n-1]<<"\n";
}