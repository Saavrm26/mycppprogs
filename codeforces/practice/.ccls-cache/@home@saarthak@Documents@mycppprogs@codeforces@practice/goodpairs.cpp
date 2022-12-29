#include <bits/stdc++.h>
using namespace std;

//datatype snippets
typedef long long ll;
//stl snippets
typedef vector<int> vi;
typedef vector<long long> vll;
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
#define trace1d(arr,n) cout<<#arr<<"\n";for(int i=0;i<=n;i++)cout<<(arr[i])<<" ";cout<<"\n";
#define trace2d(arr,n,m) cout<<#arr<<"\n";for(int i=0;i<=n;i++){for(int j=0;j<=m;j++){cout<<(arr[i][j])<<" ";}cout<<"\n";}
#define trace(x) cout<<#x<<" "<<x<<"\n";


// Questions to ask before submitting any code on OJ
// Q1. Is my approach handling all the cases ? Think of some edge cases
// Q2. How complicated is my approach
// Q3. Will your implementation be a barrier?
// Remember:
// Competition is with yourself
vi found;
void binarySearch(vpii v, int l, int r, int x)
{

    if(r>=l){
        int mid=l + (r - l) / 2;
        if(v[mid].fi==x){
            found.eb(mid);
            binarySearch(v, l, mid - 1, x);
            binarySearch(v, mid + 1, r, x);
        }
        if (v[mid].fi > x)
            binarySearch(v, l, mid - 1, x);
        binarySearch(v, mid + 1, r, x);
    }
}
int main(){
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);freopen("output.txt", "w", stdout);
    #endif
    fastIO;
    int t;
    cin>>t;
    while(t--){
        ini(n);
        vpii v(n);
        ff(i,0,n-1){
            cin>>v[i].fi;
        }
        ff(i,0,n-1){
            cin>>v[i].se;
        }
        // int ans=0;
        // ff(i,0,n-2){
        //     binarySearch(v,i+1,n-1,v[i].se);
        //     if(x==-1){
        //         continue;
        //     }
        //     else{
        //         if(v[i].fi==v[x].se){
        //             ans++;
        //         }
        //     }
        // }
        // cout<<ans<<"\n";
        map<pair<ll,ll>,ll> m;
        ff(i,0,n-1){
            m[v[i]]++;
        }
        ll ans=0;
        ff(i,0,n-1){
            auto p=mp(v[i].se,v[i].fi);
            if(m[p]>0){
                if(p!=v[i]){
                    ans+=m[p];
                    m[v[i]]--;
                }
                else{
                    if(m[p]>1){
                        ans+=((m[p]-1)*m[p])/2;
                        m[v[i]]=0;
                    }
                }
            }

        }
        cout<<ans<<"\n";
    }
}