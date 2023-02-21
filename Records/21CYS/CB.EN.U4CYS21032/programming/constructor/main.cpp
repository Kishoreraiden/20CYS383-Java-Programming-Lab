/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>

using namespace std;
class employee{
    public:
    string name;
    string surname;
    int age;
    employee(string r,string s,int t){
        name=r;
        surname=s;
        age=t;
    }
};
void display(){
    cout<<"this is the output "<< endl;
    
}

int main()
{
    employee e1=employee("vinoth"," kundi", 69);
    employee e2=employee("hacker"," junni", 9);
    cout<<e1.name<<" "<<e1.surname<<" "<<e1.age<<endl;
    cout<<e2.name<<" "<<e2.surname<<" "<<e2.age<<endl;
    return 0;
}