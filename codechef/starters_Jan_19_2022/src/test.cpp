#include <bits/stdc++.h>
using namespace std;

int main(){
    vector<int> vec{1,2,3,4};
    int c=*(vec.end());
    int f=*(find(vec.begin(),vec.begin()+2,4));
    cout<<f<<" "<<c<<" "<<vec.size();
}