#include <bits/stdc++.h>
using namespace std;

int main(){
    vector <int> vec {2,0,1};
    if(find(vec.begin()+0,vec.begin()+1,1)!=vec.end()){
        cout<<"match found";
    }   
    else{
        cout<<"match not found";
    }
}