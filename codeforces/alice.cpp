#include <bits/stdc++.h>
using namespace std;
 
//datatype snippets
#define ll long long
//vector snippets
#define vi vector<int>
#define vll vector<long long>
#define eb emplace_back
int binarySearch(vi &a, int l, int r, ll x)
{
    while (l <= r) {
        int m = l + (r - l) / 2; 
        if (a[m] == x)
            return m;
        if (a[m] < x)
            l = m + 1;
        else
            r = m - 1;
    } 
    return -1;
}
int y=2,m;
bool branching(vi &a,ll n){
    ll n1=n/2;
    bool f1=0;
    // ++y;
    auto it1=binarySearch(a,0,a.size()-1,n1);
    if(y>m){
        f1=0;
    }
    else if(it1!=-1){
        a.erase(a.begin()+it1);
        f1=1;
    }
    else{
        if(n1!=1){
            y+=1;
            f1=branching(a,n1);
        }
    }
 
    ll n2=n-n/2;
    bool f2=0;
    // ++y;
    auto it2=binarySearch(a,0,a.size()-1,n2);
    if(y>m){
        f2=0;
    }
    else if(it2!=-1){
        a.erase(a.begin()+it2);
        f2=1;
    }
    else{
        if(n2!=1){
            y+=1;
            f2=branching(a,n2);
        }
    }
    return f1 & f2;
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
        m=n;
        vi a(n);
        ll sum=0;
        for(int i=0;i<n;i++){
            cin>>a[i];
            sum += a[i];
        }
        sort(a.begin(),a.end());
        bool f;
        if(n==1)
            f=1;
        else
            f=branching(a,sum);
        if(f)
            cout<<"YES\n";
        else    
            cout<<"NO\n";
        m=0,y=2;
    }
}