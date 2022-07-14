#include <bits/stdc++.h>
using namespace std;

//datatype snippets
typedef long long ll;
//stl snippets
typedef vector<bool> vb;
typedef vector<int> vi;
typedef vector<long long> vll;
typedef vector<string> vs;
typedef vector<pair<int,int>> vpii;
typedef vector<pair<char,int>> vpci;
typedef vector<pair<long long,long long>> vpll;
typedef vector<vector<int>> vvi;
typedef vector<vector<bool>> vvb;
typedef vector<vector<long long>> vvll;
typedef queue<int> qi;
typedef deque<int> dqi;
typedef deque<long long> dqll;
typedef queue<pair<int,int>> qpii;
typedef queue<pair<long long,long long>> qpll;
typedef deque<pair<int,int>> dqpii;
typedef deque<pair<long long,long long>> dqpll;
typedef pair<int,int> pii;
typedef set<int> si;
typedef set<ll> sll;
typedef map<int,int> mii;
typedef map<long long,long long> mll;
typedef map<int,pair<int,int>> mipii;
#define all(v) v.begin(), v.end()
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
#define ffit(it,x) for(auto it=x.begin();it!=x.end();it++)
#define ffa(it,x) for(auto it:x)
//bit snippets
#define popcnt __builtin_popcount
//function snippets
ll minimum(ll a,ll b){if(a<b) return a;else return b;}
ll maximum(ll a,ll b){if(a>b) return a;else return b;}
ll absolute(ll a){if(a>=0)return a;else return a*-1;}
ll lcm (ll a, ll b) {return a / gcd(a, b) * b;}
ll mod_sub(ll a,ll b){ll mod=1e9+7;return ((a-b)%mod + mod) % mod;}
ll binpow(ll a, ll b) {ll res = 1;while (b > 0) {if (b & 1) res = res * a;a = a * a;b >>= 1;}return res;}
#define trace1d(arr,n) cout<<#arr<<"\n";for(int i=0;i<=n;i++)cout<<(arr[i])<<" ";cout<<"\n";
#define trace2d(arr,n,m) cout<<#arr<<"\n";for(int i=0;i<=n;i++){for(int j=0;j<=m;j++){cout<<(arr[i][j])<<" ";}cout<<"\n";}
#define trace(x) cout<<#x<<" "<<x<<"\n";


// Questions to ask before submitting any code on OJ
// Q1. Is my approach handling all the cases ? Think of some edge cases
// Q2. How complicated is my approach
// Q3. Will your implementation be a barrier?
// Remember:
// Competition is with yourself

pii check(vi v,int j){
    auto it1=lb(all(v),j);
    auto it2=ub(all(v),j);
    if(it1==it2){
        if(it1==v.end()){
            return mp(*(--it1),*(--it2));
        }
        if(it1==v.begin()){
            return mp((*it1),*(it2));
        }
        return mp(*(--it1),*(it2));
    }
    else{
        if(it2==v.end())
            return mp(*(it1),*(--it2));
        else
            return mp(*(it1),*(it2));
    }
}

void solve(int x);
int main(){
    fastIO;
    int t,x=1;
    cin>>t;
    while(t--){
        solve(x);
        x++;
    }
}
void solve(int x){
    ini(n) invi(v1,n)
    ini(m) invi(v2,m)
    vvi vec(m+1);
    ff(i,0,m-1){
        vec[v2[i]].eb(i+1);
    }
    //dp[i][j]  i is the number of digits considered and j is the position on the keyboard
    vvi dp(n+1,vi(m+1));
    ff(i,0,n){
        ff(j,0,m){
            if(i==0||j==0){
                dp[i][j]=0;
                continue;
            }
            if(v2[j-1]==v1[i-1]){
                if(i==1){
                    dp[i][j]=0;
                }
                else{
                    int sz=vec[v1[i-2]].size();
                    auto itrs1=check(vec[v1[i-2]],j);
                    int p1=itrs1.fi;
                    int p2=itrs1.se;
                    int dp1=dp[i-1][p1] + abs(j - p1);
                    int dp2=dp[i-1][p2] + abs(j - p2);
                    dp[i][j]=min(dp1,dp2);
                }
            }
        }
    }
    // trace2d(dp,n,m);
    int ans=INT32_MAX;
    ff(i,1,m){
        if(v2[i-1]==v1[n-1])
            ans=min(ans,dp[n][i]);
    }
    cout<<"Case "<<"#"<<x<<": "<<ans<<"\n";
}