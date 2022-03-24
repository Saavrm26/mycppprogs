#include <bits/stdc++.h>
//datatype snippets
#define ll long long
//vector snippets
#define vi vector<int>
#define vll vector<long long>
#define eb emplace_back
//function snippets
ll minimum(ll a,ll b){if(a<b) return a;else return b;}
ll maximum(ll a,ll b){if(a>b) return a;else return b;}
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin>>t;
    vll pow_of_2(31);
    for(int i=0;i<=30;i++){
        pow_of_2[i]=1<<i;
    }
    while(t--){
        ll n;
        cin>>n;
        auto it=lower_bound(pow_of_2.begin(),pow_of_2.end(),n) ;
        auto num_of_pow_of_two = (*it==n?(it):(it-1)) - pow_of_2.begin()+1;
        cout<<(n-num_of_pow_of_two)<<"\n";
    }
}