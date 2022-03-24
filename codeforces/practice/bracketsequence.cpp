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
    // #ifndef ONLINE_JUDGE
    //     system("rm output.txt");
    //     system("touch output.txt");
    //     freopen("input.txt","r",stdin);
    //     freopen("output.txt","w",stdout);
    // #endif
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s;
        cin>>s;
        stack<char> st;
        int ops=0,a=0;;
        bool f_inv_brac=0;
        string b="";
        for(int i=0;i<n;i++){
            b+=s[i];
            if(b=="()"||b=="(("||b=="))"){
                a+=2;
                ops++;
                b="";
            }
            else if(b.size()>1){
                if(s[i]==')'){
                    a+=b.length();
                    ops++;
                    b="";
                }
            }
        }
        cout<<ops<<" "<<n-a<<"\n";
    }
}