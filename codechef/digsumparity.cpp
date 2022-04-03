#include <bits/stdc++.h>
//datatype snippets
#define ll long long
//stl snippets
#define vi vector<int>
#define vll vector<long long>
#define si set<int>
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
using namespace std;

int digSum(int n){
    int dig_sum=0;
    while(n>0){
        int rem=n%10;
        dig_sum+=rem;
        n=n/10;
    }
    return dig_sum;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int org_parity=(digSum(n))%2;
        int ans=n+1;
        int new_parity=digSum(ans)%2;
        if(new_parity==org_parity)
            ans+=1;
        cout<<ans<<"\n";
    }
}