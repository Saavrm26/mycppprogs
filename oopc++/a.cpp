#include <bits/stdc++.h>
using namespace std;

class Employee
{
private:
    string Name;
    string Company;
    int Age;

public:
    void setName(string name){
        if(name!="fax")
            Name=name;
    }
    string getName(){
        return Name;
    }
    Employee(string name,string company,int age){
        Name=name;
        Company = company;
        Age = age;
    }

};
int main()
{
    Employee e1={"mf","neez duts",5};
    e1.setName("fax");
    cout<<e1.getName()<<"\n";
}