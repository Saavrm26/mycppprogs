#include <bits/stdc++.h>
//datatype snippets
#define ll long long
//stl snippets
#define vi vector<int>
#define vll vector<long long>
#define si set<int>
#define mll map<long long,long long>
#define vpll vector<pair<long long , long long>>
#define vpii vector<pair<int , int>>
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
        int n,k;
        cin>>n>>k;
        vi vec(n);
        for(int i=0;i<n;i++){
            vec[i]=i;
        }
        if(k!=n-1){
            swap(vec[0],vec[k]);
            for(int i=0;i<n/2;i++){
                cout<<vec[n-1-i]<<" "<<vec[i]<<"\n";
            }
        }
        else{
            if(n>4){
                swap(vec[0],vec[n-2]);
                swap(vec[n-2],vec[3]);
                for(int i=0;i<n/2;i++){
                    cout<<vec[n-1-i]<<" "<<vec[i]<<"\n";
                }
            }
            else{
                cout<<-1<<"\n";
            }
        }
    }
}