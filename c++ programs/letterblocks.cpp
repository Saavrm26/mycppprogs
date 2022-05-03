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
#define lb lower_bound
#define ub upper_bound
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
#define popcnt __builtin_popcount
//function snippets
ll minimum(ll a,ll b){if(a<b) return a;else return b;}
ll maximum(ll a,ll b){if(a>b) return a;else return b;}
ll absolute(ll a){if(a>=0)return a;else return a*-1;}
ll lcm (ll a, ll b) {return a / gcd(a, b) * b;}
ll binpow(ll a, ll b) {ll res = 1;while (b > 0) { if (b & 1) res = res * a;a = a * a;b >>= 1;}return res;}
ll mod_sub(ll a,ll b){ll mod=1e9+7;return ((a-b)%mod + mod) % mod;}

bool check(string str){
    int n=str.size();
    vector<int> m(26);
    for(int i=0;i<n;i++) {
        m[str[i]-65]++;
    }
    bool f=1;
    for(int i=0;i<n;i++){
        if(m[str[i]-65]==1){
            m[str[i] - 65]--;
            continue;
        }
        else if(m[str[i]-65]>1){
            int y=m[str[i]-65]-1;
            ff(j,0,y-1){
                if(str[i+j]!=str[i]){
                    f=0;
                    break;
                }
                if(j==(m[str[i]-65]-1)){
                    i+=j;
                }
                m[str[i]-65]--;
            }
        }
    }
    if(f)
        return 1;
    else
        return 0;
}
int main(){
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);freopen("output.txt", "w", stdout);
    #endif
    fastIO;
    int T;
    cin>>T;
    int t=1;
    while(t<=T){
        int n;
        cin>>n;
        vector<string> v(n);
        vector<pair<char,char>> sten(n);
        bool f=1;
        ff(i,0,n-1){
            cin>>v[i];
            sten[i].fi=v[i][0];
            sten[i].se=v[i][v[i].size()-1];
            if(sten[i].fi==sten[i].se){
                ff(j,0,v[i].size()-1){
                    if(v[i][j]!=sten[i].fi){
                        f=0;
                        break;
                    }
                }
                if(!f)
                    break;
            }
        }
        if(f){
            string s=v[0];
            v.erase(v.begin());
            sten.erase(sten.begin());
            char start=s[0],end=s[s.size()-1];
            while(v.size()!=0){
                bool found=0;
                ff(i,0,v.size()-1){
                    if(v.size()!=0){
                        if((sten[i].fi==sten[i].se)==end){
                            s+=v[i];
                            v.erase(i+v.begin());
                            sten.erase(sten.begin()+i);
                            i--;
                            found=1;
                        }
                    }
                    else
                        break;
                }
                ff(i,0,v.size()-1){
                    if(v.size()!=0){
                        if(sten[i].fi==end){
                            s+=v[i];
                            end=sten[i].se;
                            v.erase(v.begin()+i);
                            sten.erase(sten.begin()+i);
                            i--;
                            found=1;
                        }
                    }
                    else
                        break;
                }
                ff(i,0,v.size()-1){
                    if(v.size()!=0){
                        if((sten[i].fi==sten[i].se)==start){
                            s=v[i]+s;
                            v.erase(i+v.begin());
                            sten.erase(sten.begin()+i);
                            i--;
                            found=1;
                        }
                    }
                    else
                        break;
                }
                ff(i,0,v.size()-1){
                    if(v.size()!=0){
                        if(sten[i].se==start){
                            s=v[i]+s;
                            start=sten[i].fi;
                            v.erase(v.begin()+i);
                            sten.erase(sten.begin()+i);
                            i--;
                            found=1;
                        }
                    }
                    else
                        break;
                }
                if(!found){
                    if(v.size()!=0){
                        s.append(v[0]);
                        v.erase(v.begin());
                        sten.erase(sten.begin());
                    }
                }

            }
            if(check(s))
                cout<<"Case #"<<t<<": "<<s<<"\n";
            else
                cout<<"Case #"<<t<<": IMPOSSIBLE\n";
        }
        else{
            cout<<"Case #"<<t<<": IMPOSSIBLE\n";
        }
        t++;
    }
}