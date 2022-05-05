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
typedef pair<int,int> pii;
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

int main(){
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);freopen("output.txt", "w", stdout);
    #endif
    fastIO;
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vi v(n);
        // vi even,odd;
        ll evenSum=0,oddSum=0;
        // ll sum=0;
        ff(i,0,n-1){
            cin>>v[i];
            if(v[i]&1) oddSum+=v[i];
            else evenSum+=v[i];
        }
        // sort(odd.begin(),odd.end());
        // sort(even.begin(),even.end());
        // bool f=1;

        // ff(i,1,n/2-1){
        //     if((even[i]-even[0])!=(odd[i]-odd[0])){
        //         f=0;
        //         break;
        //     }
        // }
        // if(f) yes;
        // else no;
        // int f1=(evenSum%(n/2));
        // int f2=oddSum%(n/2);
        // if((evenSum%(n/2)==0)&&(oddSum%(n/2)==0)){
        //     if(((evenSum/(n/2))%2)!=((oddSum/(n/2))%2))
        //         yes;
        //     else
        //         no;
        // }
        // else no;
        if((((evenSum+oddSum)/(n/2))==0)&&((((evenSum+oddSum)/(n/2))%2)==1)){
            yes;
        }
        else
            no;
    }
}