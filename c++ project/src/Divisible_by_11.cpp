#include <iostream>
#include <string>
#include <sstream>
using namespace std;
int main(){

     //inputting number of test cases
    int T=0;    
    string t="";
    getline(cin,t);
    stringstream str(t);
    str>>T;
    if(0<=T&&T<=100000){
        //inputting array
        int flag=1;
        string s="",num="",s1="";
        getline(cin,s);
        s.append(" ");
        int ctr=0;
        for(int i=0;i<s.length(),flag=1;i++){
            char chr=s[i];
            if(chr!=' '){
                num=num+chr;
            }
            else if(ctr<T/2){
                s1=s1+num.at(0);
                stringstream st(num);
                int n=0;
                st>>n;
                // int n=stoi(num);
                if(n>100000 || n<0)
                    flag=0;
                num="";
                ctr++;
            }   
            else{
                s1=s1+num.at(num.length()-1);
                stringstream st(num);
                int n=0;
                st>>n;
                // int n=stoi(num);
                if(n>100000 || n<0)
                    flag=0;
                num="";
            }
        } 
        if(flag==1){
            stringstream st(s1);
            int n=0;
            st>>n;
            if(n%11==0){ cout<<"OUI";}
            else {cout<<"NON";}
        }

    }
    return 0;
}