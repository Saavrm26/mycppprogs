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
        vll vec(n);
        int odd_count =0,even_count=0;
        for(int i=0;i<n;i++){
            cin>>vec[i];
            if(vec[i]%2==0)
                even_count++;
            else
                odd_count++;
        }
        int ans;
        if(n%2==0){
            
            if(odd_count%2==1)
                ans=even_count;
            else{
                ans = minimum((odd_count)/2,even_count);
            }
        }
        else{
            if(odd_count<even_count){
                if(odd_count%2==1){
                    ans=even_count;
                }
                else{
                    ans=odd_count/2;
                }
            }
            else{
                if(odd_count>even_count){
                    if(odd_count%2==1){
                        ans=even_count;
                    }
                    else{
                        ans=minimum(even_count,odd_count/2);
                    }
                }
            }
        }
        cout<<ans<<"\n";
    }
}