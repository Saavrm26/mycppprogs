#include <bits/stdc++.h>
//datatype snippets
#define ll long long
//stl snippets
#define vi vector<int>
#define vll vector<long long>
#define vpii vector<pair<int,int>>
#define vpll vector<pair<long long,long long>>
#define vvi vector<vector<int>>
#define vvll vector<vector<long long>>
#define si set<int>
#define mii map<int,int>
#define mll map<long long,long long>
#define eb emplace_back
#define mp make_pair
#define fi first
#define se second
//function snippets
ll minimum(ll a,ll b){if(a<b) return a;else return b;}
ll maximum(ll a,ll b){if(a>b) return a;else return b;}
ll absolute(ll a){if(a>=0)return a;else return a*-1;}
ll lcm (ll a, ll b) {return a / gcd(a, b) * b;}
//io snippets
#define yes cout<<"YES\n"
#define no cout<<"NO\n"
#define fastIO ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
// loop snippets
#define ff(i,init,fin) for(int i=init;i<=fin;i++)
#define fb(i,init,fin) for(int i=init;i>=fin;i--)
#define ffs(i,init,fin,step) for(int i=init;i<=fin;i=i+step)
#define fbs(i,init,fin,step) for(int i=init;i>=fin;i=i-step)
using namespace std;

int pow2(int x){
    int res=0;
    while(x>0){
        if((x&1)==1)
            break;
        x=x>>1;
        res++;
    }
    return res;
}

int main(){
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);freopen("output.txt", "w", stdout);
    #endif
    fastIO;
    int n;
    cin>>n;
    vi vec(n);
    vi v(32769);
    vi ans(n);
    for(int i=1;i<32769;i++){
        v[i]=gcd(i,32768);
    }
    
    for(int i=0;i<n;i++){
        cin>>vec[i];
        if(vec[i]!=0){
            ans[i]=15-pow2(v[vec[i]]);
            for(int j=1;j<=15;j++){
                if(vec[i]+j<=32768){
                    if(ans[i]>(j+15-pow2(v[vec[i]+j]))){
                        ans[i]=j+15-(pow2(v[vec[i]+j]));
                    }
                }
                else
                    break;
            }
        }else{
            ans[i]=0;
        }
        cout<<ans[i]<<" ";
    }
    cout<<"\n";
}