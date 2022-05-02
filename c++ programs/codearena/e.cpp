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
typedef set<ll> sll;
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
ll mod_sub(ll a,ll b){ll mod=1e9+7;return ((a-b)%mod + mod) % mod;}

bool check(string str, string p,map<char,int> m){
    ff(i,0,str.size()-1){
        m[str[i]]--;
    }
    bool f=true;
    for(auto i : m){
        if(i.se!=0){
            f=false;
            break;
        }
    }
    return f;
}

int main(){
    fastIO;
    int t;
    cin>>t;
    while(t--){
        string p,h;
        cin>>p>>h;
        int n_size=p.size();
        map<char,int> m;
        ff(i,0,n_size-1){
            m[p[i]]++;
        }
        int h_size=h.size();
        bool ans=0;
        ff(i,0,h_size-n_size){
            if(h[i]>0){
                string str=h.substr(i,n_size);
                if(check(str,p,m)){
                    ans=1;
                    break;
                }
            }
        }
        if(ans)
            yes;
        else
            no;
    }
}