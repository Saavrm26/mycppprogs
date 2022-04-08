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

struct ANSWER{
    ll value;
    int l;
    int r;
};
bool sort_order(ANSWER a1,ANSWER a2){
    return a2.value>a1.value;
}
ANSWER odd_neg(vll v,int L,int R,int n){
    if(v.size()==0){
        ANSWER tmp;
        tmp.value=0;
        tmp.l=L;
        tmp.r=n-R;
        return tmp;
    }
    else{
        ll prefix=v[0],suffix=v[v.size()-1],mult=1;
        // for(int i=0;i<v.size();i++){
        //     mult*=v[i];
        // }
        int prefix_size=1;
        for(int i=0;i<v.size();i++){
            if(v[i]>0){
                // prefix*=v[i];
                prefix_size++;
            }
            else break;
        }
        int _2s_prefix=0;
        for(int i=prefix_size;i<v.size();i++){
            if(v[i]==-2||v[i]==2)
                _2s_prefix++;
        }
        int suffix_size=1;
        for(int i=v.size()-1;i>=0;i--){
            if(v[i]>0){
                // suffix*=v[i];
                suffix_size++;
            }
            else break;
        }
        int _2s_suffix=0;
        for(int i=v.size()-suffix_size-1;i>=0;i--){
            if(v[i]==-2||v[i]==2)
                _2s_suffix++;
        }
        ANSWER tmp;
        tmp.value=maximum(_2s_suffix,_2s_prefix);
        if(_2s_prefix>=_2s_suffix){
            tmp.l=L+prefix_size;
            tmp.r=n-R;
        }
        else{
            tmp.l=L;
            tmp.r=n-R+suffix_size;
        }
        return tmp;
    }
}

ANSWER even_neg(vll v,int L,int R,int n){
    ll mult =1;
    int _2s=0;
    for(int i=0;i<v.size();i++){
        if(v[i]==2||v[i]==-2)
            _2s++;
    }
    ANSWER tmp;
    tmp.value=_2s;
    tmp.l=L;
    tmp.r=n-R;
    return tmp;
}

int main(){
    #ifndef ONLINE_JUDGE
        system("ls output.txt && rm output.txt");freopen("input.txt", "r", stdin);system("touch output.txt");
        freopen("output.txt", "w", stdout);
    #endif
    fastIO;
    int t;
    cin>>t;
    while(t--){
        int n,_0s=0,neg=0;
        cin>>n;
        vll vec(n+1);
        vec[n]=0;
        for(int i=0;i<n;i++){
            cin>>vec[i];
            if(vec[i]==0) _0s++;
            else if(vec[i]<0) neg++;
        }
        if(_0s==0&&neg%2==0){
            cout<<0<<" "<<0<<"\n";
        }
        else{
            vll v;neg=0;
            vector<ANSWER> ans;
            for(int i=0;i<n+1;i++){
                if(vec[i]!=0){
                    v.eb(vec[i]);
                    if(vec[i]<0)
                        neg++;
                }
                else{
                    if(neg%2){
                        ans.eb(odd_neg(v,i-v.size(),i,n));
                        }
                    else{
                        ans.eb((even_neg(v,i-v.size(),i,n)));
                    }
                        
                    v.clear();
                    neg=0;
                }
            }
            sort(ans.begin(),ans.end(),sort_order);
            // cout<<ans[ans.size()-1].value<<"\n";
            cout<<ans[ans.size()-1].l<<" "<<ans[ans.size()-1].r<<"\n";
        }
    }
}