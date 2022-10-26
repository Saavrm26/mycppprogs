#sinclude <bits/stdc++.h>
using namespace std;

#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
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
typedef vector<vector<pair<int,int>>> vvpii;
typedef vector<vector<pair<long long,long long>>> vvpll;
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
template <class T> using oset = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;
template <class T,class U> using omap = tree<T, U, less<T>, rb_tree_tag, tree_order_statistics_node_update>;

// Questions to ask before submitting any code on OJ
// Q1. Is my approach handling all the cases ? Think of some edge cases
// Q2. How complicated is my approach
// Q3. Will your implementation be a barrier?
// Remember:
// Competition is with yourself

void solve();
ll N=1e3+1;
int n,m;



bool is_valid(int i,int j){
    if(i<0||i>n) return 0;
    if(j<0||j>m) return 0;
    return 1;
}

int main(){
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);freopen("output.txt", "w", stdout);
    #endif
    fastIO;
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}
void solve(){
    cin>>n>>m;
    vvll mat(n+1,vll(m+1));
    ll ri=(n+1)/2;
    ll rj=(m+1)/2;
    ll z=n-ri+m-rj;
    vpll vec;

    if(n&1){
        mat[ri][rj]=z;
        vec.eb(mp(ri,rj));
        if(m&1){
            mat[ri][rj]=z;
        }
        else{
            mat[ri][rj]=z;
            mat[ri][rj+1]=z;
            vec.eb(mp(ri,rj+1));
        }
    }
    else{
        mat[ri][rj]=z;
        mat[ri+1][rj]=z;
        vec.eb(mp(ri,rj));
        vec.eb(mp(ri+1,rj));
        if(m&1){
            mat[ri][rj]=z;
        }
        else{
            mat[ri][rj+1]=z;
            mat[ri+1][rj+1]=z;
            vec.eb(mp(ri,rj+1));
            vec.eb(mp(ri+1,rj+1));
        }
    }
    vpii moves={mp(1,0),mp(0,1),mp(-1,0),mp(0,-1)};
    ll ctr=0;
    while(vec.size()!=0){
        vpll vec2;
        ffa(y,vec){
            int i=y.fi;
            int j=y.se;
            ffa(x,moves){
                int ii=y.fi+x.fi;
                int jj=y.se+x.se;
                if(is_valid(ii,jj)){
                    if(mat[ii][jj]!=0){
                        if(mat[ii][jj]>mat[i][j]+1){
                            mat[ii][jj]=mat[i][j]+1;
                            vec2.eb(mp(ii,jj));
                        }
                    }
                    else{
                        mat[ii][jj]=mat[i][j]+1;
                        vec2.eb(mp(ii,jj));
                    };
                }
            }
        }
        vec=vec2;
    }
    vll ans;
    ff(i,1,n){
        ff(j,1,m){
                ans.eb(mat[i][j]);
        }
    }
    sort(all(ans));
    ff(i,0,int(ans.size())-1){
        cout<<ans[i]<<" ";
    }
    cout<<"\n";
}