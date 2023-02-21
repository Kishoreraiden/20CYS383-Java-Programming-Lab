/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>

using namespace std;

class A {
public:
int x;
protected:
int y;
private:
int z;
};
class B : public A {
// x stays public
// y stays protected
// z is not accessible from B
};

int main()
{
B b;
b.x=5;
}



b is public