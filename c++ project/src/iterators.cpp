#include <bits/stdc++.h>
using namespace std;

int main(){
    vector<int> v={1,2,3,4};
    vector<int> :: iterator it;
    v.erase(v.begin()+1);
    for(it=v.begin();it<v.end();it++){
        cout<<*it<<" ";
    }   
    cout<<"\n"<<v.back()<<endl;
    for(auto ele:v){
        ele++;
    }
    for(auto ele:v){
        cout<<ele<<" ";
    }
    cout<<endl;
    for(auto &ele:v){           //ye by reference ke liye  int &a= c se alag hai.
        cout<<++ele<<" "<<endl;
    }
    auto s =v;     // s is a copy of v no changes done in s will be reflected in v
    for(auto ele:s){
        cout<<ele<<" ";
    }
    cout<<endl;
    //upper bound mai sirf > and lower bound mai sirf >=
}