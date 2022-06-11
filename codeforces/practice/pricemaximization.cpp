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
#define trace1d(arr,n) cout<<#arr<<"\n";for(int i=0;i<=n;i++)cout<<(arr[i])<<" ";cout<<"\n";
#define trace2d(arr,n,m) cout<<#arr<<"\n";for(int i=0;i<=n;i++){for(int j=0;j<=m;j++){cout<<(arr[i][j])<<" ";}cout<<"\n";}
#define trace(x) cout<<#x<<" "<<x<<"\n";


// Questions to ask before submitting any code on OJ
// Q1. Is my approach handling all the cases ? Think of some edge cases
// Q2. How complicated is my approach
// Q3. Will your implementation be a barrier?
// Remember:
// Competition is with yourself

// int mod_lower_bound(vi v,vb &mark,int l, int r,int x,int k){
//     int req = ceil(double(x)/k)*k - x;
//     int so=INT32_MAX,si=-1;
//     while(l<=r){
//         int m= (r + l) / 2;
//         if(!mark[m]){
//             if(v[m]==req){
//                 so = req;
//                 si=m;
//                 break;
//             }
//             else if(v[m]>req){
//                 if(so>v[m]){
//                     so=v[m];
//                     si=m;
//                 }
//                 r=m-1;
//             }
//             else{
//                 if(so>v[m]&&(so<req||so==INT32_MAX)){
//                     so=v[m];
//                     si=m;
//                 }
//                 l=m+1;
//             }
//         }
//         else{
//             if(v[m]>req) r=m-1;
//             else l=m+1;
//         }
//     }
//     mark[si]=1;
//     return (so+x)/k;
// }

// int twopointer(int l,int r,vi v,vi &mark){
//     for()
// }

int main(){
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);freopen("output.txt", "w", stdout);
    #endif
    fastIO;
    int t;
    cin>>t;
    while(t--){
        ini(n) ini(k)
        invi(v,n)
        sort(v.begin(),v.end());
        ll ans=0;
        vb mark(n);
        int initial=0;
        fb(r,n-1,1){
            if(!mark[r]){
                mark[r]=1;
                int l=initial,so=INT32_MAX,si=-1;
                int req = ceil(v[r]/k+1)*k - v[r];
                while(l<r){
                    if(!mark[l]){
                        if(v[l]>=req){
                            so=v[l];
                            if(l==initial) initial++;
                            si=l;break;
                        }
                        else{
                            if(so>v[l]){
                                so=v[l];
                                si=l;
                            }
                        }
                    }
                    l++;
                }
                mark[si]=1;
                ans+= (so+v[r])/k;
            }
        }
        cout<<ans<<"\n";
    }
}