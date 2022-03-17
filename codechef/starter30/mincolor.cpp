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
        grid[x1-1][y1-1]=1;
        grid[x2-1][y2-1]=2;
        if(!((x1+y1)&1)^((x2+y2)&1)){
            if(y1-2>=0)
                grid[x1-1][y1-2]=3;
            if(y2-2>=0)
                grid[x2-1][y2-2]=3;
            if(y1-1+1<n)
                grid[x1-1][y1]=3;
            if(y2-1+1<n)
                grid[x2-1][y2]=3;
            if(x1-2>=0)
                grid[x1-2][y1-1]=3;
            if(x2-2>=0)
                grid[x2-2][y2-1]=3;
            if(x1<m)
                grid[x1][y1-1]=3;
            if(x2<m)
                grid[x2][y2-1]=3;
        }
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                cout<<grid[i][j]<<" ";
            }
            cout<<"\n";
        }
    }
}