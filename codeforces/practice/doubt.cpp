#include <bits/stdc++.h>
using namespace std;

#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
//datatype snippets
typedef long long ll;
typedef long double ld;
typedef unsigned long long ull;
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
typedef queue<long long> qll;
typedef deque<int> dqi;
typedef deque<long long> dqll;
typedef queue<pair<int,int>> qpii;
typedef queue<pair<long long,long long>> qpll;
typedef deque<pair<int,int>> dqpii;
typedef deque<pair<long long,long long>> dqpll;
typedef pair<int,int> pii;
typedef pair<ll,ll> pll;
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
#define ff(i,init,fin) for(ll i=init;i<=fin;i++)
#define fb(i,init,fin) for(int i=init;i>=fin;i--)
#define ffs(i,init,fin,step) for(int i=init;i<=fin;i=i+step)
#define fbs(i,init,fin,step) for(int i=init;i>=fin;i=i-step)
#define ffit(it,x) for(auto it=x.begin();it!=x.end();it++)
#define ffa(it,x) for(auto it:x)
//bit snippets
#define popcnt __builtin_popcount
//function snippets
// ll minimum(ll a,ll b){if(a<b) return a;else return b;}
// ll maximum(ll a,ll b){if(a>b) return a;else return b;}
// ll absolute(ll a){if(a>=0)return a;else return a*-1;}
// ll lcm (ll a, ll b) {return a / gcd(a, b) * b;}
ll mod = 1e9+7;
ll binpow(ll x, ll y,ll M)
{
    if (y == 0)
        return 1;
    ll p = binpow(x, y / 2, M) % M;
    p = (p * p) % M;
    return (y % 2 == 0) ? p : (x * p) % M;
}
ll mod_sub(ll a,ll b){return ((a-b)%mod + mod) % mod;}
ll mod_add(ll a,ll b){return ((a%mod) + (b%mod))%mod;}
ll mod_mult(ll a,ll b){a = a%mod;b=b%mod; return ((a*b)%mod + mod)%mod;}
ll mod_inverse(ll A, ll M)
{
    return binpow(A, M - 2, M);
}
// ll power_of_2(ll n,ll curr){ ll val = 1<<curr; if(n%val==0) return curr + power_of_2(n/val,curr+1); else{ if(n%2==0){ return 1+power_of_2(n/2,2); } return 0; } }
// ld prec = 1e-7;
// bool iseq(ld v1,ld v2){ return abs(v2 - v1)<= prec; }
// bool islt(ld v1,ld v2){if(iseq(v1,v2)) return 0; return v1<v2;}
// bool isgt(ld v1,ld v2){if(iseq(v1,v2)) return 0; return v1>v2;}
// bool isgte(ld v1,ld v2){if(iseq(v1,v2)) return 1; return v1>v2;}
// bool islte(ld v1,ld v2){if(iseq(v1,v2)) return 1; return v1<v2;}
template<typename T,typename U>
U slicing(T const& v,int X, int Y){auto first = v.begin() + X;auto last = v.begin() + Y + 1;auto cont=U(first, last);return cont;}
#define trace1d(arr,n) cout<<#arr<<"\n";for(int i=0;i<=n;i++)cout<<(arr[i])<<" ";cout<<"\n";
#define trace1d(arr,n) cout<<#arr<<"\n";for(int i=0;i<=n;i++)cout<<(arr[i])<<" ";cout<<"\n";
#define trace2d(arr,n,m) cout<<#arr<<"\n";for(int i=0;i<=n;i++){for(int j=0;j<=m;j++){cout<<(arr[i][j])<<" ";}cout<<"\n";}
#define trace(x) cout<<#x<<" "<<x<<"\n";
#define init1d(val,arr,n) for(int i=0;i<=n;i++){arr[i]=val;}
#define init2d(val,arr,n,m) for(int i=0;i<=n;i++){for(int j=0;j<=m;j++){arr[i][j]=val;}}
template <class T> using oset = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;
template <class T,class U> using omap = tree<T, U, less<T>, rb_tree_tag, tree_order_statistics_node_update>;
template <class T> using omm = tree<T, null_type, less_equal<T>, rb_tree_tag, tree_order_statistics_node_update>;
#define ook order_of_key
#define fbo find_by_order
template <typename F>
void deb(F&& lamda){
    #ifndef ONLINE_JUDGE
        lamda();
    #endif
}

// Questions to ask before submitting any code on OJ
// Q1. Is my approach handling all the cases ? Think of some edge cases
// Q2. How complicated is my approach
// Q3. Will your implementation be a barrier?
// Remember:
// Competition is with yourself
/* stuff you should look for
 * int overflow, array bounds
 * special cases (n=1?)
 * do smth instead of nothing and stay organized
 * WRITE STUFF DOWN
 * DON'T GET STUCK ON ONE APPROACH
 */
void solve();
int main(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);freopen("output.txt", "w", stdout);
    #endif
    fastIO;
    int t;
    int ctr=1;
    cin>>t;
    while(t--){
        deb(
            [&]{
                cout<<"Case #"<<ctr<<" : \n";
                cout.flush();
                ctr++;
            }
        );
        solve();
    }
    deb([]{
        cerr << "Runtime is: " << (clock() * 1.0 / CLOCKS_PER_SEC)*1000 << "ms\n";
    });
}
int setBitNumber(int n) {
    int k = __builtin_clz(n);
    return (31 - k);
}
int calc(vi &v,vi &pref_v,vi &_10_v,int &n,int &k){
    deque<int> q;
    int hi=1,lo=1;
    int ans = INT_MAX;
    while(hi<=n){
        q.push_back(v[hi]);
        if(q.size()>k){
            q.pop_front();
            lo++;
        }
        if(q.size()==k){
            int _1= pref_v[hi] - pref_v[lo-1];
            if(_1==0){
                ans = min(ans,1);
            }
            else if(_1==k){
                ans = min(ans,0);
            }
            else{
                int x = 0;
                if(q.front()==0){
                    x++;
                }
                x+=(_10_v[hi] - _10_v[lo-1])*2;
                ans=min(ans,x);
            }
        }
        hi++;
    }
    return ans;
}
void solve(){
    ini(n) ini(k);
    ins(s);
    vi v(n+1),inv(n+1);
    ff(i,1,n){
        v[i]=s[i-1]-'0';
        inv[i]=v[i]^1;
    }
    vi pref_v(n+1),pref_inv(n+1);
    vi _10_v(n+1),_10_inv(n+1);
    ff(i,1,n){
        pref_v[i]=pref_v[i-1]+v[i];
        pref_inv[i]=pref_inv[i-1]+inv[i];
    }
    ff(i,2,n){
        if((!v[i]) && v[i-1]) _10_v[i]=_10_v[i-1]+1;
        else _10_v[i]=_10_v[i-1];
        if((!inv[i]) && inv[i-1]) _10_inv[i]=_10_inv[i-1]+1;
        else _10_inv[i]=_10_inv[i-1];
    }
    int ans = min(calc(v,pref_v,_10_v,n,k),1+calc(inv,pref_inv,_10_inv,n,k));
    cout<<ans<<"\n";
}