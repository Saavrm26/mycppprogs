#include <bits/stdc++.h>
using namespace std;

#define vi vector<int>
#define ll long long
#define vll vector<long long>
int row_mini(vector<vector<int>> grid,int col){\
    int row_mini=INT32_MAX;
    for(int i=0;i<4;i++){
        if(grid[i][col]<row_mini){
            row_mini=grid[i][col];
        }
    }
    return row_mini;
}
int column_mini(vector<vector<int>> grid,int col){\
    int col_mini=INT32_MAX;
    for(int i=0;i<4;i++){
        if(grid[i][col]<col_mini){
            col_mini=grid[i][col];
        }
    }
    return col_mini;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vi a(n);
        vi b(n);
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        vi A;
        A.push_back(a[0]);A.push_back(a[1]);A.push_back(a[n-2]);A.push_back(a[n-1]);       
        for(int i=0;i<n;i++){
            cin>>b[i];
        }
        vi B;
        B.push_back(b[0]);B.push_back(b[1]);B.push_back(b[n-2]);B.push_back(b[n-1]);
        vector<vector<int>> grid(4,vector<int> (4));
        for(int i=0;i<4;i++){
            for(int j=0;j<4;j++){
                grid[i][j]=abs(A[i]-B[j]);
            }
        }
        vi minis;
        minis.push_back(row_mini(grid,0));
        minis.push_back(row_mini(grid,3));
        minis.push_back(column_mini(grid,1));
        minis.push_back(column_mini(grid,2));
        sort(minis.begin(),minis.end());
        // if(abs(A[0]-B[0])+abs(A[3]-B[3])==(minis[0]+minis[1]))
        //     cout<<(ll)(minis[0])+(ll)(minis[1])<<"\n";
        // else{
        //     cout<<(ll)(minis[0])+(ll)(minis[1])+(ll)(minis[2])+(ll)(minis[3])<<"\n";
        // }
        cout<<min(((ll)(minis[0])+(ll)(minis[1])+(ll)(minis[2])+(ll)(minis[3])),(ll)(abs(A[0]-B[0])+abs(A[3]-B[3])))<<"\n";
    }
}