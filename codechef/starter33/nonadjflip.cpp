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
    while(t--){
        int n;cin>>n;
        string s;cin>>s;
        vi idx;
        for(int i=0;i<n;i++){
            if(s[i]=='1'){
                idx.eb(i);
            }
        }       
        int ops=0;
        if(idx.size()!=0){
            ops=1;
            for(int i=1;i<idx.size();i++){
                if(idx[i]-idx[i-1]==1){
                    ops=2;
                    break;
                }
            }
        }
        cout<<ops<<"\n";
    }
}