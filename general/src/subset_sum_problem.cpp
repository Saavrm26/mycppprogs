#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++){
            cin >> arr[i];
        }
        int k;
        cin>>k;
        vector<int> collection((int)1e5,0);
        collection[arr[0]]++;
        for(int i=0;i<n;i++){
            int sum=0;
            for(int j=i;j<n;j++){
                sum += arr[j];
                collection[sum]++;
            }
        }
    }
}