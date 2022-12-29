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
    solve();

}
int N=1e3+1;
int n,m;
vvi mat(N,vi(N,INT32_MAX));
vs lab(N);

bool isValid(int i,int j){
    if(i<0||i>=n) return 0;
    if(j<0||j>=m) return 0;
    if(lab[i][j]=='#') return 0;
    return 1;
}

void solve(){
    vpii moves={{1,0},{-1,0},{0,1},{0,-1}};
    pii start={-1,-1};
    pii finish=start;
    cin>>(n); cin>>(m);
    ff(i,0,n-1){
        cin>>lab[i];
        ff(j,0,m-1){
            if(lab[i][j]=='A'){ start.fi=i;start.se=j;}
            if(lab[i][j]=='B'){ finish.fi=i;finish.se=j;}
        }
    }
    qpii q;
    //assumming B is alredy in the path
    int ans_len=0;
    q.push(start);
    // this will store number of steps taken and the parent for every vertex
    vector<vector<pair<int,pair<int,int>>>> path(n,vector<pair<int,pair<int,int>>>(m,mp(INT32_MAX,mp(-1,-1))));
    bool f=0;
    path[start.fi][start.se].fi=0;
    while(!q.empty()){
        auto par=q.front();
        int len=path[par.fi][par.se].fi;
        q.pop();
        ffa(k,moves){
            auto child=mp(par.fi+k.fi,par.se+k.se);
            if(isValid(child.fi,child.se)){
                if(path[child.fi][child.se].fi>len+1){
                    q.push(child);
                    path[child.fi][child.se].fi=len+1;
                    path[child.fi][child.se].se=par;
                    if(child==finish){
                        ans_len=len+1;
                        f=1;break;
                    }
                }
            }
        }
        if(f==1) break;

    }

    if(f) yes;
    else{no;return;}
    cout<<ans_len<<"\n";
    auto curr=finish;
    string str="";
    while(curr!=start){
        auto par=path[curr.fi][curr.se].se;
        //diff1 row ke liye hai
        int diff1=par.fi - curr.fi;
        //diff2 column ke liye hai
        int diff2=par.se - curr.se;
        if(diff1){
            if(diff1==-1){
                str+='D';
            }
            else{
                str+='U';
            }
        }
        else{
            if(diff2==-1){
                str+='R';
            }
            else{
                str+='L';
            }
        }
        curr=par;
    }
    reverse(str.begin(),str.end());
    cout<<str<<"\n";
}