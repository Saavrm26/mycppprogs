#include <bits/stdc++.h>
//datatype snippets
#define ll long long
//stl snippets
#define vi vector<int>
#define vll vector<long long>
#define vpii vector<pair<int,int>>
#define vpll vector<pair<long long,long long>>
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
#define yes cout<<"YES\n"
#define no cout<<"NO\n"
#define fastIO ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
using namespace std;


int main(){
    #ifndef ONLINE_JUDGE
        system("ls output.txt && rm output.txt");freopen("input.txt", "r", stdin);system("touch output.txt");freopen("output.txt", "w", stdout);
    #endif
    fastIO;
    int t;
    cin>>t;
    vll vec(16);
    vec[0]=1;
    for(int i=1;i<16;i++){
        vec[i]=i*vec[i-1];
        }
    while(t--){
        ll n,ans=0;
        cin>>n;
        
        ll mask;
        ans=INT32_MAX;
        for(mask=1;mask<(1<<16);mask++){
            ll x=mask;
            ll N=n;
            int i=0;
            int a=0;
            while(x>0&&N>0){
                if((x&1)==1){
                    if(vec[i]<=N){
                        a++;
                        N-=vec[i];
                    }
                    else{
                        break;
                    }
                }
                x=x>>1;
                i++;
            }      
            a+=__builtin_popcountll(N);
            ans=minimum(a,ans);
        }
        cout<<ans<<"\n";
    }
}