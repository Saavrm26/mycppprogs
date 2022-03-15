#include <bits/stdc++.h>
using namespace std;

#define vi vector<int>
#define ll long long
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n;
    cin>>n;
    vector<pair<int,int>> vyx(n);
    for(int i=0;i<n;i++){
        cin>>vyx[i].second>>vyx[i].first;
    }
    string dir;
    cin>>dir;
    vector<pair<pair<int,int>,char>> pos_and_dir(n);
    for(int i=0;i<n;i++){
        pos_and_dir[i]={vyx[i],dir[i]};
    }
    sort(pos_and_dir.begin(),pos_and_dir.end());
    bool f=false;
    for(int i=0;i<n-1;i++){
        if((pos_and_dir[i].first.first==pos_and_dir[i+1].first.first)&&(pos_and_dir[i].second=='R'&&pos_and_dir[i+1].second=='L')){
            f=true;
            break;
        }
    }
    if(f)
        cout<<"Yes\n";
    else
        cout<<"No\n";
}