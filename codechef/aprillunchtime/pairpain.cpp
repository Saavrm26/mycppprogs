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

int main(){
    // #ifndef ONLINE_JUDGE
    //     freopen("input.txt", "r", stdin);freopen("output.txt", "w", stdout);
    // #endif
    fastIO;
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vi v(n);
        mii m;
        int _1=0,_2=0;
        ff(i,0,n-1){
            cin>>v[i];
            m[v[i]]++;
        }
        ll ans=0;
        ff(i,0,n-1){
            if(v[i]==1){
                ans+= n-1 - i;
            }
            else{
                ans += m[1];
                if(v[i]==2){
                    if(m[2]>0)
                        ans += m[2] -1;
                }
            }
            m[v[i]]--;
        }
        cout<<ans<<"\n";
    }
}