#include <iostream>
using namespace std;
int T=0,N=0;
string n="",output="",word="";
int compute(int key){
    switch (key)
    {
    case 0:
        return 6;
        break;
    case 1:
        return 2;
        break;
    case 2:
        return 5;
        break;
    case 3:
        return 5;
        break;
    case 4:
        return 4;
        break;
    case 5:
        return 5;
        break;
    case 6:
        return 6;
        break;
    case 7:
        return 3;
        break;
    case 8:
        return 7;
        break;
    case 9:
        return 6;
        break;
    default:
        return 0;
        break;
    }
}
int main(){
    cin>>T;
    while (T>0)
    {
        cin>>n;   
        int Match_sticks=0;
        for(int i=0;i<n.length();i++){
            int key=stoi(n.substr(i,1));
            Match_sticks=Match_sticks+compute(key);
        }
        if(Match_sticks%2==0){
            for(int i=0;i<Match_sticks/2;i++){
                word=word+'1';
                }
                output += word + "\n";
                word="";
            }
        else{
            for(int i=0;i<(Match_sticks-3)/2;i++){
                word=word+'1';
                }
                word="7"+word;
                output += word +"\n";
                word="";
        }
        T--;
    }
    cout<<output;
    return 0;
}