#include <bits/stdc++.h>
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
typedef queue<long long> qll;
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
// ll minimum(ll a,ll b){if(a<b) return a;else return b;}
// ll maximum(ll a,ll b){if(a>b) return a;else return b;}
// ll absolute(ll a){if(a>=0)return a;else return a*-1;}
// ll lcm (ll a, ll b) {return a / gcd(a, b) * b;}
// ll mod_sub(ll a,ll b){ll mod=1e9+7;return ((a-b)%mod + mod) % mod;}
// ll binpow(ll a, ll b) {ll res = 1;while (b > 0) {if (b & 1) res = res * a;a = a * a;b >>= 1;}return res;}
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
}
typedef long double ld;
void solve(){
    ini(n)
    invll(x, n);
    invll(t, n);
    if(n==1){
        cout<<x[0]<<"\n";
        return;
    }
    vpll pos_time(n);
    ff(i,0,n-1){
        pos_time[i]=mp(x[i],t[i]);
    }
    sort(all(pos_time));
    vll pos_sub_time(n), pos_plus_time(n), max_pos_uptil_l(n), max_pos_uptil_r(n);

    //defining pos - time
    pos_sub_time[0] = pos_time[0].fi - pos_time[0].se;
    max_pos_uptil_l[0] = pos_sub_time[0];
    ff(l, 1, n - 1)
    {
        pos_sub_time[l] = pos_time[l].fi - pos_time[l].se + pos_sub_time[l - 1];
        max_pos_uptil_l[l] = min(max_pos_uptil_l[l - 1], pos_time[l].fi - pos_time[l].se);
    }
    //defining pos + time
    pos_plus_time[n - 1] = pos_time[n - 1].fi + pos_time[n - 1].se;
    max_pos_uptil_r[n - 1] = pos_plus_time[n - 1];
    fb(r, n - 2, 0)
    {
        pos_plus_time[r] += pos_plus_time[r + 1] + pos_time[r].fi + pos_time[r].se;
        max_pos_uptil_r[r] = max(pos_time[r].fi + pos_time[r].se, max_pos_uptil_r[r + 1]);
    }

    ld ans = INT64_MAX,ans_time=INT64_MAX;
    ld N = n;
    ff(l, -1, n-1)
    {
        ld mean,maximum_time;
        if(l==-1){
            mean=pos_plus_time[0]/N;
            maximum_time=abs(max_pos_uptil_r[0]-mean);
        }
        else if(l==n-1){
            mean=pos_sub_time[n-1]/N;
            maximum_time=abs(max_pos_uptil_l[n-1]-mean);
        }
        else{
            mean=(pos_sub_time[l]+pos_plus_time[l+1])/N;
            maximum_time=max(abs(max_pos_uptil_l[l]-mean),abs(max_pos_uptil_r[l+1]-mean));
        }
        if(maximum_time<ans_time){
            ans=abs(mean);
            ans_time=maximum_time;
        }
    }
    cout<<ans<<"\n";

}