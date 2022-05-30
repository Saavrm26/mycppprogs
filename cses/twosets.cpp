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

int main(){

    fastIO;
    inll(n)
    vi v(n+1);
    ff(i,0,n){
        v[i]=1;
    }
    ll sum=(n*(n+1))/2;
    bool f=0;
    if(!(sum&1)){
        sum=sum/2;
        fb(i,n,0){
            if(sum>=i){
                sum-=i;
                v[i]=0;
            }
            else{
                if(v[sum]==1){
                    f=1;
                }
                else{
                    f=0;break;
                }
            }
        }
        if(f){
            yes;
            vi s1,s2;
            ff(i,1,n){
                if(v[i])
                    s1.eb(i);
                else
                    s2.eb(i);
            }
            cout<<s1.size()<<"\n";
            ff(i,0,s1.size()-1){
                cout<<s1[i]<<" ";
            }
            cout<<"\n";
            cout<<s2.size()<<"\n";
            ff(i,0,s2.size()-1){
                cout<<s2[i]<<" ";
            }
            cout<<"\n";
        }
        else no;
    }
    else no;
}