#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    int marks1[3],marks2[3];
    while(t--){
        int flag=1,sum1=0,sum2=0;
        for(int i=0;i<3;i++){
            cin>>marks1[i];
            if(marks1[i]>=0){
                sum1 += marks1[i];
            }
            else flag=0;
        }
        for(int i=0;i<3;i++){
            cin>>marks2[i];
            if(marks2[i]>=0)
                sum2 += marks2[i];
            else flag=0;
        }
        if(flag==1)
        {
            int diff;
            if(sum1==sum2){
                if(marks1[0]==marks2[0]){
                    if(marks1[1]==marks2[1]){
                        if(marks1[2]==marks2[2]){
                            diff=0;
                        }
                        else
                            diff=marks1[2]-marks2[2];
                    }
                    else
                        diff=marks1[1]-marks2[1];    
                }
                else {
                    diff=marks1[0]-marks2[0];
                }
            }
            else 
                diff=sum1-sum2;
            if(diff>0) 
                cout<<"DRAGON"<<endl;
            else if(diff<0) 
                cout<<"SLOTH"<<endl;
            else
                cout<<"TIE"<<endl;
        }
        else continue;
    }
}