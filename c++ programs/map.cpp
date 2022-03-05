#include <bits/stdc++.h>
using namespace std;

int main(){
    map<int,int> m;
    m[3];
    m[1];
    m[1]++;
    for(auto x : m){
        cout<<x.first<<x.second;
    }
}