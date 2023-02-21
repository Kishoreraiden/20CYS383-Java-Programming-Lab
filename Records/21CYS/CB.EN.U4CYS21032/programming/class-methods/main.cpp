/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
using namespace std;
class frnds{
    public:
    int number;
    string name;
    void sample();
};
void frnds::sample(){
    cout<<"kaka junni is ";
}



int main(){
    frnds useme;
    useme.number=20;
    useme.sample();
    useme.name="vinoth";
    cout<<"the name of my friend : "<<useme.name<<endl;
    cout<<"the number is :"<<useme.number<<endl;
}