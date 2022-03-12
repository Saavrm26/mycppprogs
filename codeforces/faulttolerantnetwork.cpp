#include <bits/stdc++.h>
using namespace std;

#define vi vector<int>
#define ll long long
#define vll vector<long long>
int row_mini(vector<int> vec,int x){
    int row_mini=INT32_MAX;
    int n=vec.size();
    for(int i=0;i<n;i++){
        if(row_mini>abs(vec[i]-x)){
            row_mini=abs(vec[i]-x);
        }
    }
    return row_mini;
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
        vector<pair<int,int>> a(n);
        vector<pair<int,int>> b(n);
        for(int i=0;i<n;i++){
            int q;
            cin>>q;
            if(i==0||i==n-1)
                a[i]=make_pair(q,1);
            else
                a[i]={q,0};
        }
        vector<pair<int,int>> A;
        A.push_back(a[0]);A.push_back(a[n-1]);       
        for(int i=0;i<n;i++){
            int q;
            cin>>q;
            if(i==0||i==n-1)
                b[i]={q,1};
            else
                b[i]={q,0};
        }
        vector<pair<int,int> B;
        B.push_back(b[0]);B.push_back(b[n-1]);
        vector<pair<int,int> minis;
        minis.push_back(row_mini(b,A[0]));
        minis.push_back(row_mini(b,A[1]));
        minis.push_back(row_mini(a,B[0]));
        minis.push_back(row_mini(a,B[1]));
        sort(minis.begin(),minis.end());
        if(==(minis[0]+minis[1]))
            cout<<(ll)(minis[0])+(ll)(minis[1])<<"\n";
        else{
            cout<<(ll)(minis[0])+(ll)(minis[1])+(ll)(minis[2])+(ll)(minis[3])<<"\n";
        }
        cout<<min(((ll)(minis[0])+(ll)(minis[1])+(ll)(minis[2])+(ll)(minis[3])),min(((ll)(abs(a[0]-b[0]))+(ll)abs(a[n-1]-b[n-1])),((ll)(abs((ll)a[0]-(ll)b[n-1]))+(ll)abs((ll)a[n-1]-(ll)b[0]))))<<"\n";
    }
}