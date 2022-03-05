#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string str;
        vector<int> vec(n);
        for(int i=0;i<n;i++){
            cin>>vec[i];
        }
        auto sorted=vec;
        sort(sorted.begin(),sorted.end());
        cin>>str;
        vector<int> unsorted_index;
        int ctr_n=0;
        for(int i=0;i<n;i++){
            if(sorted[i]!=vec[i]){
                unsorted_index.push_back(i);
            }
            if(str[i]=='N')
                ctr_n++;
        }
        if(unsorted_index.size()==0){
            cout<<0<<endl;
            continue;
        }
        if(!(ctr_n==n||ctr_n==0)){
            
            if(str[0]!=str[n-1]){
                cout<<1<<endl;
                continue;
            }
            
                if(str[unsorted_index[0]]!=str[unsorted_index[unsorted_index.size()-1]]){
                    cout<<1<<endl;
                    continue;
                }
                    
                string str2=str.substr(0,unsorted_index[0])+str.substr(unsorted_index[unsorted_index.size()-1]+1);
                int N_ctr=0,S_ctr=0;
                for(int i=0;i<str2.length();i++){
                    if(str2[i]=='N')
                        N_ctr++;
                    else
                        S_ctr++;
                }
                
                if(N_ctr!=str2.length()){
                    if(S_ctr!=str2.length()){
                        cout<<1<<endl;
                        continue;
                    }
                }

            
            if(ctr_n!=n){
                cout<<2<<endl;
            }

        }
        else
            cout<<-1<<endl;
        
    }
}