#include <bits/stdc++.h>
using namespace std;

int main(){
    vector<int> A{1,2,3,6};
    int l=A.size();
    for(int i=0;i<l;i++){
        cout<<A[i]<<" " << endl;
    } 
    vector<int> a(l);
    copy(A.begin(),A.end(),a.begin());
    for(int i=0;i<l;i++){
        cout<<a[i]<<" " << endl;
    }   
}