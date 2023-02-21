/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>

using namespace std;

class base {
public:
int x;
void getdata()
{
cin >> x;
}
};

class derive1: public base
{
public:
int y;
void readdata()
{
cin >> y;
}
};


class derive2 : public derive1
{
private:
int z;
public:
void indata()
{
cin >> z;
}
void product()
{
cout<<"Product= " << x*y*z;
}
};

int main()
{
derive2 a;
a.getdata();
a.readdata();
a.indata();
a.product();
return 0;
}