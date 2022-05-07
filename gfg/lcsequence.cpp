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
// vvi dp(3001,vi(3001,-1));
// int lcs(string s,string t,int is,int it){
//     if(is==0||it==0) return 0;
//     if(dp[is][it]!=-1){
//         return dp[is][it];
//     }
//     if(s[is-1]==t[it-1]){
//         return dp[is][it]=1+lcs(s,t,is-1,it-1);
//     }
//     else{
//         return dp[is][it]=max(lcs(s,t,is-1,it),lcs(s,t,is,it-1));
//     }
// }
int main(){
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);freopen("output.txt", "w", stdout);
    #endif
    fastIO;
    ins(s)
    ins(t)
    // int y=lcs(s,t,s.size(),t.size());
    // if(y>0){
    //     cout<<y<<"\n";
    // }
    // else{
    //     cout<<"\n";
    // }
    int ns=s.size();
    int nt=s.size();
    vvi dp(ns,vi(nt,-1));
    ff(i,0,ns){
        ff(j,0,nt){
            if(i==0||j==0){
                dp[i][j]=0;
            }
            else{
                if(s[i-1]==s[j-1]){
                    dp[i][j]=dp[i-1][i-1]+1;
                }
                else{
                    dp[i][j]=max(dp[i][j-1],dp[i-1][j]);
                }
            }
        }
    }
    cout<<dp[ns][nt]<<"\n";

}