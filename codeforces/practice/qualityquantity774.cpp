#include <bits/stdc++.h>
using namespace std;

#define vi vector<int>
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vi vec(n);
        for(int i=0;i<n;i++){
            cin>>vec[i];
        }
        sort(vec.begin(),vec.end());
        long long sum_red=vec[n-1],sum_blue=vec[0]+vec[1];
        int count_red=1,count_blue=2;
        int flag=0;
        while(count_blue+count_red<=n){
            if(sum_red>sum_blue){
                if(count_blue+count_red>n){
                    flag=0;
                    break;
                }
                else{
                    flag=1;
                    break;
                }
            }
            count_blue++;
            count_red++;
            sum_red +=vec[n-count_red];
            sum_blue +=vec[count_blue-1];
        }
        if(flag)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
}