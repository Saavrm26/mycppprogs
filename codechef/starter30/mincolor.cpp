#include <bits/stdc++.h>
using namespace std;

#define vi vector<int>
#define ll long long
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        int n,m,x1,y1,x2,y2;
        cin>>n>>m;
        cin>>x1>>y1;
        cin>>x2>>y2;
        ll grid[n][m];
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                grid[i][j]=(i+1)+(j+1);
            }
        }
        if(((x1+y1)&1)^((x2+y2)&1)){
            for(int i=0;i<n;i++){
                for(int j=0;j<m;j++){
                    
                    if((i+1+j+1)&1){
                        if((x1-1+y1-1)&1){
                            grid[i][j]=1;
                        }
                        else{
                            grid[i][j]=2;
                        }
                    }
                    else
                    {
                        if((x1+y1)&1){
                            grid[i][j]=2;
                        }
                        else{
                            grid[i][j]=1;
                        }
                    }    
                }
            }
        }
        else{
            for(int i=0;i<n;i++){
                for(int j=0;j<m;j++){
                    if((i+j)&1){
                        if((x1+y1)&1)
                            grid[i][j]=1;
                        else
                            grid[i][j]=3;
                    }
                    else{
                        if((x1+y1)&1)
                            grid[i][j]=3;
                        else
                            grid[i][j]=1;
                    }
                }
            }
        }
        grid[x1-1][y1-1]=1;
        grid[x2-1][y2-1]=2;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                cout<<grid[i][j]<<" ";
            }
            cout<<"\n";
        }
    }
}