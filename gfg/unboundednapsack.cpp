// { Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
// User function Template for C++
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
typedef map<int,int> mii;
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

class Solution{
public:
    int knapSack(int N, int W, int val[], int wt[])
    {
        int dp[N+1][W+1];
        ff(i,0,N){
            ff(j,0,W){
                dp[i][j]=0;
            }
        }
        ff(i,1,N){
            ff(j,1,W){

            }
        }
    }
};

// { Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int N, W;
        cin>>N>>W;
        int val[N], wt[N];
        for(int i = 0;i < N;i++)
            cin>>val[i];
        for(int i = 0;i < N;i++)
            cin>>wt[i];

        Solution ob;
        cout<<ob.knapSack(N, W, val, wt)<<endl;
    }
    return 0;
}  // } Driver Code Ends


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
typedef map<int,int> mii;
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
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);freopen("output.txt", "w", stdout);
    #endif
    fastIO;
    int t;
    cin>>t;
    while(t--){

    }
}