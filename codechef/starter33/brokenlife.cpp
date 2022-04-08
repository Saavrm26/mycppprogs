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

int main(){
    #ifndef ONLINE_JUDGE
        system("ls output.txt && rm output.txt");freopen("input.txt", "r", stdin);system("touch output.txt");freopen("output.txt", "w", stdout);
    #endif
    fastIO;
    int t;
    cin>>t;
    while(t--){
        int n1,n2;
        cin>>n1>>n2;
        string s1,s2;
        cin>>s1>>s2;
        bool f1=0;
        map<char,int> char_map;char_map['a']=0;char_map['b']=0;char_map['c']=0;char_map['d']=0;char_map['e']=0;
        for(int i=0;i<s2.length();i++){
            char_map[s2[i]]++;
        }
        for(int i=0,k=0;i<s1.length();i++){
            if(s1[i]==s2[k]){
                k++;
            }
            if(s2.length()==k){
                f1=1;
                break;
            }
        }  
        if(f1){
            cout<<-1<<"\n";
        }
        else{
            bool f2=0;
            char chr;
            for(auto it : char_map){
                if(it.se==0){
                    chr=it.fi;
                    f2=1;
                    break;
                }
            }         
            if(f2){
                for(int i=0;i<s1.length();i++){
                    if(s1[i]=='?')
                        s1[i]=chr;
                }
                cout<<s1<<"\n";
            }
            else{
                bool f3=0;
                string to_match=s2.substr(0,s1.length()-1);
                int matched_indx;
                for(int i=0,k=0;i<s1.length();i++){
                    if(s1[i]==to_match[k]){
                        k++;
                    }
                    if(k==to_match.length()){
                        matched_indx=i;
                        f3=1;
                        break;
                    }
                }
                if(f3){
                    for(int i=0;i<s1.length();i++){
                        if(i<=matched_indx){
                            if(s1[i]=='?')
                                s1[i]='d';
                        }
                        else{
                            if(s1[i]=='?')
                                s1[i]='c';
                        }
                    }
                    cout<<s1<<"\n";
                }
                else{
                    for(int i=0;i<s1.length();i++){
                        if(s1[i]=='?'){
                            s1[i]='d';
                        }
                    }
                    cout<<s1<<"\n";
                }
            }
        }
    }
}
