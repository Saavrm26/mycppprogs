#include <bits/stdc++.h>
using namespace std;

#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
// datatype snippets
typedef long long ll;
// stl snippets
typedef vector<bool> vb;
typedef vector<int> vi;
typedef vector<long long> vll;
typedef vector<string> vs;
typedef vector<pair<int, int>> vpii;
typedef vector<pair<char, int>> vpci;
typedef vector<pair<long long, long long>> vpll;
typedef vector<vector<int>> vvi;
typedef vector<vector<bool>> vvb;
typedef vector<vector<long long>> vvll;
typedef vector<vector<pair<int, int>>> vvpii;
typedef vector<vector<pair<long long, long long>>> vvpll;
typedef queue<int> qi;
typedef queue<long long> qll;
typedef deque<int> dqi;
typedef deque<long long> dqll;
typedef queue<pair<int, int>> qpii;
typedef queue<pair<long long, long long>> qpll;
typedef deque<pair<int, int>> dqpii;
typedef deque<pair<long long, long long>> dqpll;
typedef pair<int, int> pii;
typedef set<int> si;
typedef set<ll> sll;
typedef map<int, int> mii;
typedef map<long long, long long> mll;
typedef map<int, pair<int, int>> mipii;
#define all(v) v.begin(), v.end()
#define eb emplace_back
#define mp make_pair
#define lb lower_bound
#define ub upper_bound
#define fi first
#define se second
// io snippets
#define yes cout << "YES\n"
#define no cout << "NO\n"
#define fastIO                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL)
#define ini(x) \
    int x;     \
    cin >> x;
#define inll(x) \
    ll x;       \
    cin >> x;
#define ins(x) \
    string x;  \
    cin >> x;
#define invi(x, n) \
    vi x(n);       \
    ff(i, 0, n - 1) cin >> x[i];
#define invll(x, n) \
    vll x(n);       \
    ff(i, 0, n - 1) cin >> x[i];
// loop snippets
#define ff(i, init, fin) for (int i = init; i <= fin; i++)
#define fb(i, init, fin) for (int i = init; i >= fin; i--)
#define ffs(i, init, fin, step) for (int i = init; i <= fin; i = i + step)
#define fbs(i, init, fin, step) for (int i = init; i >= fin; i = i - step)
#define ffit(it, x) for (auto it = x.begin(); it != x.end(); it++)
#define ffa(it, x) for (auto it : x)
// bit snippets
#define popcnt __builtin_popcount
// function snippets
//  ll minimum(ll a,ll b){if(a<b) return a;else return b;}
//  ll maximum(ll a,ll b){if(a>b) return a;else return b;}
//  ll absolute(ll a){if(a>=0)return a;else return a*-1;}
//  ll lcm (ll a, ll b) {return a / gcd(a, b) * b;}
//  ll mod_sub(ll a,ll b){ll mod=1e9+7;return ((a-b)%mod + mod) % mod;}
//  ll binpow(ll a, ll b) {ll res = 1;while (b > 0) {if (b & 1) res = res * a;a = a * a;b >>= 1;}return res;}
template <typename T, typename U>
U slicing(T const &v, int X, int Y)
{
    auto first = v.begin() + X;
    auto last = v.begin() + Y + 1;
    auto cont = U(first, last);
    return cont;
}
#define trace1d(arr, n)          \
    cout << #arr << "\n";        \
    for (int i = 0; i <= n; i++) \
        cout << (arr[i]) << " "; \
    cout << "\n";
#define trace1d(arr, n)          \
    cout << #arr << "\n";        \
    for (int i = 0; i <= n; i++) \
        cout << (arr[i]) << " "; \
    cout << "\n";
#define trace2d(arr, n, m)              \
    cout << #arr << "\n";               \
    for (int i = 0; i <= n; i++)        \
    {                                   \
        for (int j = 0; j <= m; j++)    \
        {                               \
            cout << (arr[i][j]) << " "; \
        }                               \
        cout << "\n";                   \
    }
#define trace(x) cout << #x << " " << x << "\n";
#define init1d(val, arr, n)      \
    for (int i = 0; i <= n; i++) \
    {                            \
        arr[i] = val;            \
    }
#define init2d(val, arr, n, m)       \
    for (int i = 0; i <= n; i++)     \
    {                                \
        for (int j = 0; j <= m; j++) \
        {                            \
            arr[i][j] = val;         \
        }                            \
    }
template <class T>
using oset = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;
template <class T, class U>
using omap = tree<T, U, less<T>, rb_tree_tag, tree_order_statistics_node_update>;
template <class T>
using omm = tree<T, null_type, less_equal<T>, rb_tree_tag, tree_order_statistics_node_update>;
#define ook order_of_key
#define fbo find_by_order
template <typename F>
void deb(F &&lamda)
{
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

void solve();
int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    fastIO;
    int t;
    int ctr = 1;
    cin >> t;
    while (t--)
    {
        deb(
            [&]
            {
                cout << "Case #" << ctr << " : \n";
                cout.flush();
                ctr++;
            });
        solve();
    }
}
void solve()
{
    ini(n)
    invi(v, n)
        // dp[even][odd][parity] stores weather its possible for alice to win
    int dp[101][101][2];
    ff(i, 0, 100) ff(j, 0, 100) ff(k, 0, 1) dp[i][j][k] = 0;
    int e = 0, o = 0;
    ff(i, 0, n-1)
    {
        if (v[i] & 1)
            o++;
        else
            e++;
    }
    if(n==1){
        if(e)
            cout << "Alice\n";
        else
            cout << "Bob\n";
            return;
    }
    //0 odd
    ff(i, 0, e)
    {
        ff(k, 0, 1)
        {
            dp[i][0][0] = 1;
            dp[i][0][1] = 0;
        }
    }
    //1 odd
    ff(i,0,e){
        dp[i][1][1]=1;
        if(i&1){
            dp[i][1][0]=1;
        }
        else{
            dp[i][1][0]=0;
        }
    }
    ff(i, 0, e)
    {
        ff(j, 2, o)
        {
            ff(k, 0, 1)
            {
                bool to=0,te=0;
                //alice takes odd
                bool l1=0;
                //bob takes odd
                if(j-2>=0){
                    l1|= (dp[i][j-2][k^1]==0);
                    to=1;
                }
                //bob takes even
                if(i-1>=0){
                    l1|=(dp[i-1][j-1][k^1]==0);
                    to=1;
                }

                //alice takes even
                bool l2=0;
                //bob takes even
                if(i-2>=0){
                    l2|=(dp[i-2][j][k]==0);
                    te=1;
                }
                //bob take odd
                if(i-1>=0){
                    l2|=(dp[i-1][j-1][k]==0);
                    te=1;
                }
                bool res;
                if(to&&te){
                    res=l1&&l2;
                }
                else{
                    res=l1||l2;
                }
                dp[i][j][k]=res^1;
            }
        }
    }
    // ff(i, 0, e)
    // {
    //     ff(j, 0, o)
    //     {
    //         cout<<dp[i][j][0]<<"|"<<dp[i][j][1]<<"  ";
    //     }
    //     cout<<"\n\n";
    // }
    if (dp[e][o][0])
    {
        cout << "Alice\n";
    }
    else
    {
        cout << "Bob\n";
    }
}