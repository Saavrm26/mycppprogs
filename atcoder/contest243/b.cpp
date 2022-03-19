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
    vi a(n);
    vi b(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int same_pos=0;
    for(int i=0;i<n;i++){
        cin>>b[i];
        if(a[i]==b[i])
            same_pos++;
    }
    int diff_pos=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(a[i]==b[j] && i!=j)
                diff_pos++;
        }
    }
    cout<<same_pos<<"\n"<<diff_pos<<"\n";
}