#include <iostream>
#include <cmath>
#include <string>
using namespace std;
int main(){
     //inputting number of test cases
    int T=0;// T=2
    
    string t="";
    getline(cin,t);
    T=stoi(t);
    //inputting array
    string s="",num="",s1="";
    getline(cin,s);
    s.append(" ");
    int ctr=0;
    for(int i=0;i<s.length();i++){
        char chr=s[i];
        if(chr!=' '){
            num=num+chr;
 
        }
        else if(ctr<T/2){
            s1=s1+num[0];
            num="";
            ctr++;
        }   
        else{
            s1=s1+num[num.length()-1];
            num="";
        }
    } 
    
    int e=0,o=0;
    for(int i=0;i<s1.length();i++)
    {
        int p=stoi(s1.substr(i,1));
        if(i%2==0)
        {
            
            e=e + p;
        }
        else
        {
            o=o + p;
        }
        
    }
    int diff=e-o;
    if(diff%11==0){
        cout<<"OUI";
    }
    else
    cout<<"NON";
    return 0;
}