#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> vec(n);
        for(int i=0;i<n;i++){
            cin>>vec[i];
        }
        int correct=0,num_to_rev=1;      // corr=0   ntr=1   1
        auto it=vec.begin();             // it=h+0
        for(int i=0;i<n;i++){
            if(vec[i]==i+1){            
                correct++;
                num_to_rev=vec[i]+1;
            }
            else{                                           //i=0
                it=find(vec.begin()+i,vec.end(),num_to_rev);    //it= h+1 
                break;
            }
        }
        int l=it-vec.begin()-correct+1;         //  l=h+1 - h - 0 + 1 =2
        for(int i=correct;i<correct + l/2;i++){       // i==0  
            int temp=vec[i];
            vec[i]=vec[l+correct-1-(i-correct)];
            vec[l+correct-1-(i-correct)]=temp;
        }
        for(auto i : vec){
            cout<<i<<" ";
        }
        cout<<endl;
    }

}