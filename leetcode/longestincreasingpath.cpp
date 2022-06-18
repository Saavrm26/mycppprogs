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
typedef vector<vector<long long>> vvll;
typedef pair<int,int> pii;
typedef set<int> si;
typedef set<ll> sll;
typedef map<int,int> mii;
typedef map<long long,long long> mll;
typedef map<int,pair<int,int>> mipii;
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
//tracing
#define trace1d(arr,n) cout<<#arr<<"\n";for(int i=0;i<=n;i++)cout<<(arr[i])<<" ";cout<<"\n";
#define trace2d(arr,n,m) cout<<#arr<<"\n";for(int i=0;i<=n;i++){for(int j=0;j<=m;j++){cout<<(arr[i][j])<<" ";}cout<<"\n";}
#define trace(x) cout<<#x<<" "<<x<<"\n";

// Questions to ask before submitting any code on OJ
// Q1. Is my approach handling all the cases ? Think of some edge cases
// Q2. How complicated is my approach
// Q3. Will your implementation be a barrier?
// Remember:
// Competition is with yourself
class Solution {

public:
    int dp[201][201];
    int n,m;
    int dfs(vector<vector<int>>& v,int i,int j,int parent){
        if(i<1 || i>m) return 0;
        if(j<1||j>n) return 0;

        if(dp[i][j]!=-1) return dp[i][j];
        int temp=0;
        if(i+1<=m&&v[i][j-1]>parent)
            temp=max(dfs(v,i+1,j,v[i][j-1]),temp);
        if(0<i-1&&v[i-2][j-1]>parent)
            temp=max(temp,dfs(v,i-1,j,v[i-2][j-1]));
        if(j+1<=n&&v[i-1][j]>parent)
            temp=max(temp,dfs(v,i,j+1,v[i-1][j]));
        if(0<j-1&&v[i-1][j-2]>parent)
            temp=max(temp,dfs(v,i,j-1,v[i-1][j-2]));
        return dp[i][j]=1+temp;

    }
    int longestIncreasingPath(vector<vector<int>>& matrix) {
        memset(dp,-1,sizeof(dp));
        m=matrix.size();
        n=matrix[0].size();
        int y=INT32_MIN;
        ff(i,1,m){
            ff(j,1,n){
                y=max(y,dfs(matrix,i,j,matrix[i-1][j-1]));
            }
        }
        return y;
    }
};
// int main()
// {
//     #ifndef ONLINE_JUDGE
//         freopen("input.txt", "r", stdin);freopen("output.txt", "w", stdout);
//     #endif

//    	int t;
//     cin >> t;
//     while (t--)
//     {
//         ini(m) ini(n)
//         vvi matrix(m,vi(n));
//         ff(i,0,m-1){
//             ff(j,0,n-1){
//                 cin>>matrix[i][j];
//             }
//         }

// 	    Solution ob;
// 	    cout << ob.longestIncreasingPath(matrix) << "\n";

//     }
//     return 0;
// }