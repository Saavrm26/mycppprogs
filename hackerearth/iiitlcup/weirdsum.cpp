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
ll binpow(ll a, ll b) {ll res = 1;while (b > 0) { if (b & 1) res = res * a;a = a * a;b >>= 1;}return res;}
ll mod_sub(ll a,ll b){ll mod=1e9+7;return ((a-b)%mod + mod) % mod;}

int main(){
    // #ifndef ONLINE_JUDGE
    //     freopen("input.txt", "r", stdin);freopen("output.txt", "w", stdout);
    // #endif
    fastIO;
    int t;
    cin>>t;
    while(t--){
        int l,r;
        cin>>l>>r;
        // int upper=0,lower=0;
        // int R=r;
        // if(R>0){
        //     R=R/10;
        //     upper++;
        // }
        // ll ans=(9*5-(l%10)*((l%10) +1))+((r%10)*((r%10)+1))/2;
        // ff(i,l+10-l%10,r-r%10){
        //     int y=binpow(10,upper);
        //     // int z=0;
        //     // if(z>0){
        //     //     R=R/10;
        //     //     upper++;
        //     // }
        //     if(l%y){
        //         ff(i,l%y,r%y){
        //             ans+=i;
        //         }
        //         int a1=r%y - l%y;
        //         ff(j,1,upper-1){

        //         }
        //     }
        // }
        // ll ans=(9*5-(l%10)*((l%10) +1))+((r%10)*((r%10)+1))/2;
        // ll ans=0;
        // int L=l;
        // if(L>0){
        //     int rem=L%10;
        //     L=L/10;
        //     ans+=rem;
        // }
        // int prev=l;

        // int _1=10,_2=100,_3=1000,_4=10000;
        // ff(i,l+1,r){
        //     prev=i-1;
        //     if((i%_1)!=(prev%_1)){
        //         ans+=i%_1;
        //     }
        //     if((i%_2-i%_1)!=(prev%_2-prev%_1)){
        //         ans+=i%_1;
        //     }
        //     if((i%_3-i%_2)!=(prev%_3-prev%_2)){
        //         ans+=i%_1;
        //     }
        //     if((i%_4-i%_3)!=((prev%_4-prev%_3))){
        //         ans+=i%_1;
        //     }
        // }
        // cout<<ans<<"\n";
        ll ans=0;
        ff(i,l,r){
            int temp=i;
            while(temp>0){
                int rem=temp%10;
                ans+=rem;
                temp/=10;
            }
        }
        cout<<ans<<"\n";
    }
}