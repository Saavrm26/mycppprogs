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
typedef map<int,pair<int,int>> mipii;
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

int main(){
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);freopen("output.txt", "w", stdout);
    #endif
    fastIO;
    int q;
    cin>>q;
    while(q--){
        int n;cin>>n;
        string s,t;cin>>s>>t;
        if(n==1){
            if(s==t) yes;
            else no;
            continue;
        }
        // for s
        // int curr_b1=-1;
        // if(s[n-1]=='b'){
        //     curr_b1=n-1;
        // }
        // for(int i=n-2;i>=0;i--){
        //     if((s[i]=='a'||s[i]=='c')&&curr_b1!=-1){
        //         swap(s[i],s[curr_b1]);
        //         curr_b1--;
        //     }
        //     else{
        //         if(curr_b1==-1) curr_b1=i;
        //     }
        // }
        // int curr_b2=-1;
        // if(t[n-1]=='b'){
        //     curr_b2=n-1;
        // }
        // for(int i=n-2;i>=0;i--){
        //     if((t[i]=='a'||t[i]=='c')){
        //         if(curr_b2!=-1){
        //             swap(t[i],t[curr_b2]);
        //             curr_b2--;
        //         }
        //     }
        //     else{
        //         if(curr_b2==-1) curr_b2=i;
        //     }
        // }
        // trace1d(s,n-1);trace1d(t,n-1);
        // int curr1=0;

        // ff(i,0,n-2){
        //     string temp=s.substr(i,2);
        //     if(temp =="ba"||temp=="bc"||temp=="ca"||temp=="ac"){
        //         int curr_b1=-1;
        //         fb(j,i-1,curr1){
        //             if((s[j]=='a'||s[j]=='c')){
        //                     if(curr_b1!=-1){
        //                         swap(s[j],s[curr_b1]);
        //                         curr_b1--;
        //                     }
        //             }
        //             else{
        //                 if(curr_b1==-1) curr_b1=j;
        //             }
        //         }
        //         curr1=i;
        //     }
        // }
        // vvi v1(n),v2(n);  // 0 is a 1 is b 2 is c
        // ff(i,1,n-1){
        //     char chr1=s[i];
        //     v1[i]
        // }
        vi pos2;
        vs str2;
        for(int i=0;i<=n-2;i++){
            string temp=t.substr(i,2);
            if(temp =="ba"||temp=="bc"||temp=="ca"||temp=="ac"){
                pos2.eb(i);
                str2.eb(temp);
            }
        }

        bool f=1;
        int sa=0,sb=0,sc=0,ta=0,tb=0,tc=0;
        int x=0;
        for(int j=0;j<n;j++){
            if(x<pos2.size()){
                if(j==pos2[x]){
                    x++;
                    if((sa!=ta)&&(sc!=tc)&&(sc!=tc)){
                        f=0;break;
                    }
                    sa=ta=sb=tb=sc=tc=0;
                }
            }
            if(s[j]=='a') sa++;
            if(s[j]=='b') sb++;
            if(s[j]=='c') sc++;
            if(t[j]=='a') ta++;
            if(t[j]=='b') tb++;
            if(t[j]=='c') tc++;
        }
        if((sa!=ta)&&(sc!=tc)&&(sc!=tc)){
            f=0;break;
        }




        // for(int i=0;i<=pos.size()-1;i++){
        //     string str1=s.substr(pos[i],2);
        //     string str2=t.substr(pos[i],2);
        //     if(str1==str2){
        //         if(i==0){
        //             int sa=0,sb=0,sc=0,ta=0,tb=0,tc=0;
        //             ff(j,0,pos[i]){
        //                 if(s[j]=='a') sa++;
        //                 if(s[j]=='b') sb++;
        //                 if(s[j]=='c') sc++;
        //                 if(t[j]=='a') ta++;
        //                 if(t[j]=='b') tb++;
        //                 if(t[j]=='c') tc++;
        //             }
        //             if((sa==ta)&&(sc==tc)&&(sc==tc)){
        //                 f=0;break;
        //             }
        //         }
        //         else{
        //             int sa=0,sb=0,sc=0,ta=0,tb=0,tc=0;
        //             ff(j,pos[i-1]+1,pos[i]){
        //                 if(s[j]=='a') sa++;
        //                 if(s[j]=='b') sb++;
        //                 if(s[j]=='c') sc++;
        //                 if(t[j]=='a') ta++;
        //                 if(t[j]=='b') tb++;
        //                 if(t[j]=='c') tc++;
        //             }
        //             if((sa==ta)&&(sc==tc)&&(sc==tc)){
        //                 f=0;break;
        //             }
        //         }
        //     }
        //     else f=0;
        //     if(!f) break;
        // }

        // bool f=1;
        // ff(i,0,n-1){
        //     if(s[i]!=t[i]){f=0;break;}
        // }
        if(f) yes;
        else no;
    }
}