#include <bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin>>t;
    string output="";
    while(t>0){
        //n - rows
        //m - column
        int n=0;
        int m=0;
        cin>>n;
        cin>>m;
        int black[n+2][4];   //0,1 index store starting position of black cell and 2,3 store ending position of black cell
        black[0][0]=0;
        black[0][2]=0;
        black[0][1]=-1;
        black[0][3]=-1;
        black[n+1][0]=0;
        black[n+1][2]=0;
        black[n+1][1]=-1;
        black[n+1][3]=-1;
        for(int k=1;k<n+1;k++){
            string s="";
            cin>>s;
            //storing row information
            black[k][0]=k;
            black[k][2]=k;
            //storing column information
            black[k][1]=s.find('#');
            black[k][3]=s.find_last_of('#');
            
        }
        //rows and columns
        int f1=0,f2=0,l1=0,l2=0,first=0,last=0,row=0;
        for(int i=0;i<n+2;i++){
            if(black[i][1]==-1){
                if(i==0||i==n+1){
                    if(i==0){
                        if(black[1][1]==black[1][3]&& black[1][1]!=-1 ){
                            row=1;
                        }
                        else{
                        row=black[1][3]-black[1][1]+1;
                        }
                    }
                    else{
                        if(black[n][1]==black[n][3]&& black[n][1]!=-1 ){
                            if(row<1) {
                                row=1;
                            }
                        }
                        else{
                            if(row<black[n][3]-black[n][1]) {
                                row=black[n][3]-black[n][1]+1;
                            }
                        }
                    }
                }
                else{
                    int row1=0,row2=0;
                    if(black[i-1][1]==black[i-1][3]&& black[i-1][1]!=-1 ){
                        row1=1;
                    }
                    else{
                        row1=black[i-1][3]-black[i-1][1]+1;
                    }
                    if(black[i+1][1]==black[i+1][3]&& black[i+1][1]!=-1){
                        row2=1;
                    }
                    else{
                        row2=black[i+1][3]-black[i+1][1]+1;
                    }
                    row=max(row1,row2);
                }
                if(i!=n+1){
                    first=black[i+1][1];
                    if(f1>f2){
                        f2=f1;
                    }
                    f1=0;
                    last=black[i+1][3];
                    if(l1>l2){
                        l2=l1;
                    }
                    l1=0;
                }
            }
            if(first!=-1){
                if(first==black[i][1]){
                    f1++;
                }
                if(last==black[i][3]){
                    l1++;
                }
            }        
        }
        int max1=max(f2,l2);
        int max2=max(row,max1);
        output += to_string(max2) + "\n";
        t--;
    }
    cout<<output;
    return 0;
}