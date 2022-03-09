#include <bits/stdc++.h>
using namespace std;

#define vi vector<int>
#define ll long long
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        // string garb;
        // cin>>garb;
        // // cin.ignore();
        int n,m;
        cin>>n>>m;
        vector<pair<int , pair<int,int>>> vec(m); // m and x
        for(int i=0;i<m;i++){
            int a,b;
            cin>>a>>b;
            vec[i].second.first=a;
            vec[i].second.second=i+1;
            vec[i].first=b;
        }
        sort(vec.begin(),vec.end());
        int sum=0;
        vector<pair<int,int>> pos;
        for(int i = 0;i < 2*n;i++){
            sum += vec[i].first; 
            pos.push_back(vec[i].second);
        }
        cout<<sum<<endl;
        sort(pos.begin(),pos.end());
        for(int i = 0;i <n;i++){ 
            cout<< pos[i].second<<" "<<pos[2*n-1-i].second<<endl;
        }
        cout<<"\n";
    }
}