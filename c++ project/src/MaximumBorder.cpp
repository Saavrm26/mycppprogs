#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int n,m,t;
int main(){
     //n is rows and m is columns
    string s="",output="";
    getline(cin,s);
    t=stoi(s);
    while(t>0){
        string temp;
        getline(cin,temp);
        int ws=temp.find(' ');
        int n=stoi(temp.substr(0,ws));
        //int m=stoi(temp.substr(ws+1));
        string input="";
        int row_border1=0,row_border2=0,column_border1=0,column_border2=0;
        int pos_starting[n],pos_ending[n];
        int ctr1=0;
        for(int j=0;j<n;j++){                                                            
            getline(cin,temp);
            input.append(temp).append(":");
        }
        for(int i=0;i<n;i++){
            int pos=input.find(":");
            string Str=input.substr(pos);
            input=input.substr(pos+1);
            int ctr2=0;
            if(Str.find("#")>=0){ 
                for(int j=0;j<Str.length();j++){                   
                    char chr=Str[j];                
                    if(chr=='#'){
                        if(ctr2==0){
                            pos_starting[i]=j;
                            ctr2=1;
                        }
                        pos_ending[i]=j;
                    }                
                }
                if(ctr1==0){
                    row_border1=pos_ending[i]-pos_starting[i]+1;
                    ctr1=1;
                }
                row_border2=pos_ending[i]-pos_starting[i];
            }
            else {
                    pos_starting[i]=-1;
                    pos_ending[i]=-1;
                }
            
        }
        int flag1=1,flag2=1;
        for(int i=0;i<n-1;i++){
            if((pos_starting[i]==pos_starting[i+1])&&(pos_starting[i]!=-1)&&flag1==1){
                column_border1++;
                
            }
            else{
                column_border1=0;
                flag1=0;
                }
            if((pos_ending[i]==pos_ending[i+1])&&(pos_ending[i]!=-1)&&flag2==1){
                column_border2++;
            }
            else{
                column_border2=0;
                flag2=0;
            }
        }
        int max_row=max(row_border1,row_border2);
        int max_column=max(column_border1,column_border2);
        int max_border=max(max_column,max_row);
        output += to_string(max_border)+"\n";
        t--;
    }
    cout<<output<<"\b";
    return 0;
}
