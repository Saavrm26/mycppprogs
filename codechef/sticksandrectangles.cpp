#include <bits/stdc++.h>
//datatype snippets
#define ll long long
//stl snippets
#define vi vector<int>
#define vll vector<long long>
#define si set<int>
#define mll map<long long,long long>
#define mii map<int,int>
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
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vi vec(n);
        mii mp;
        for(int i=0;i<n;i++){
            cin>>vec[i];
            mp[vec[i]]++;
        }
        vi paired;
        vi unpaired;
        //generating paired and unpaired
        for(auto it : mp){
            if((it.se)%2==0){
                int x=it.se/2;
                while(x>0){
                    paired.eb(it.fi);
                    x--;
                }
            }
            else{
                int x=it.se/2;
                while(x>0){
                    paired.eb(it.fi);
                    x--;
                }
                unpaired.eb(it.first);
            }
        }
        int ans=0,unpaired_size=unpaired.size(),paired_size=paired.size();
        if(paired_size%2==0){
            ans = (unpaired_size/2)*2 + (unpaired_size%2)*3;
        }
        else{
            if(unpaired_size>0){
                unpaired_size-=1;
                ans = 1 + ((unpaired_size/2)*2 + (unpaired_size%2)*3); 
            }
            else{
                ans = (paired_size%2)*2;
            }
        }
        cout<<ans<<"\n";
    }
}