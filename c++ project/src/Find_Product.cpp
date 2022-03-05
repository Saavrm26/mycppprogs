#include <bits/stdc++.h>
using namespace std;

int main(){
    int N;
    cin>>N;
    int n;
    long int mult=1;
    for(int i=0;i<N;i++){
        cin>>n;
        mult = (mult*n)%((long int)pow(10,9) + 7);
    }
    cout<<(mult);
}