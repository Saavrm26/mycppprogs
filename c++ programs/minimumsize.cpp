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

int main(){
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);freopen("output.txt", "w", stdout);
    #endif
    fastIO;
    int t;
    cin>>t;
    while(t--){
        int n,m;
        cin>>n>>m;
        vi a(n),b(m);
        ff(i,0,n-1){
            cin>>a[i];
        }
        ff(i,0,m-1){
            cin>>b[i];
        }
        ll p;cin>>p;

        auto mini=a;
        auto maxi=b;
        if(n>m){
            maxi=a;
            mini=b;
        }
        ll maxiSum=0,miniSum=0;
        int miniLength=mini.size();
        int maxiLength=maxi.size();
        ff(i,0,miniLength-1){
            miniSum+=mini[i];
        }
        ff(i,0,maxiLength-1){
            maxiSum+=maxi[i];
        }
        //make size equal
        int lMax=0,rMax=maxiLength-1,lMin,rMin;
        while(miniLength!=maxiLength){
            if(maxi[lMax]>maxi[rMax]){
                maxiSum-=maxi[rMax];
                rMax--;
            }
            else if(maxi[lMax]<maxi[rMax]){
                maxiSum-=maxi[lMax];
                lMax++;
            }
            else{
                int x=0;
                while(maxi[lMax+x]==maxi[rMax-x]){
                    if(maxi[lMax+x+1]==maxi[rMax-x-1])
                        x++;
                    else{
                        if(maxi[lMax+x+1]>maxi[rMax-x-1]){
                            rMax--;
                        }
                        else{
                            lMax++;
                        }
                    }
                    maxiLength--;
                }
            }
        }
        lMin=0,rMin=miniLength-1;
        if((maxiSum*miniSum)>=p){
            while((maxiSum*miniSum)>=p){
                if(maxi[lMax]>maxi[rMax]){
                    maxiSum-=maxi[rMax];
                    rMax--;
                }
                else if(maxi[lMax]<maxi[rMax]){
                    maxiSum-=maxi[lMax];
                    lMax++;
                }
                else{
                    int x=0;
                    while(maxi[lMax+x]==maxi[rMax-x]){
                        if(maxi[lMax+x+1]==maxi[rMax-x-1])
                            x++;
                        else{
                            if(maxi[lMax+x+1]>maxi[rMax-x-1]){
                                rMax--;
                            }
                            else{
                                lMax++;
                            }
                        }
                    }

                }
                if(mini[lMin]>mini[rMin]){
                    miniSum-=mini[rMin];
                    rMin--;
                }
                else if(mini[lMin]<mini[rMin]){
                    miniSum-=mini[lMin];
                    lMin++;
                }
                else{
                    int x=0;
                    while(mini[lMin+x]==mini[rMin-x]){
                        if(maxi[lMin+x+1]==maxi[rMin-x-1])
                            x++;
                        else{
                            if(maxi[lMin+x+1]>maxi[rMin-x-1]){
                                rMin--;
                            }
                            else{
                                lMin++;
                            }
                        }
                    }
                }
                if(miniSum*maxiSum>=p){
                    miniLength--;
                    maxiLength--;
                }
            }
            cout<<miniLength<<"\n";
        }
        else{
            cout<<-1<<"\n";
        }
    }
}