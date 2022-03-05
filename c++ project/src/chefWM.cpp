#include <bits/stdc++.h>

using namespace std;
int main(){
    int t;
    cin>>t;
    string output="";
    vector<int> vct;\
    int ctr=0;
    while(t>0){
        int n,m;
        cin>>n>>m;
        
        for(int i=m/2,flag=0;i>=2;i--,flag=0){
            if(m%i==0){
                if(ctr==0){
                    vct.push_back(i);
                    ctr++;
                }
                else {
                    for(int x: vct){
                        if(x%i==0){
                            flag=1;
                            break;
                        }
                    }
                    if(flag==1)
                        continue;
                    vct.push_back(i);
                    ctr++;
                }
            }
        }
        output += to_string(ctr)+"\n";
        t--;
    }
    cout<<output;
}