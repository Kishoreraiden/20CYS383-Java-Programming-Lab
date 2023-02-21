/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>

using namespace std;
class test{
int code;
static int count;
public:
void setcode()
{
code = count++;
}
void showcode()
{
cout<<"object number: "<<code<<endl;
}
static void showcount(){
cout<<"count: "<<count<<endl;
}
};

int test :: count=10;
int main(){
test t1,t2;
t1.setcode();
test :: showcount();
t2.setcode();

test t3;
t3.setcode();
test :: showcount();
t1.showcode();
t2.showcode();
t3.showcode();
return 0;
}
