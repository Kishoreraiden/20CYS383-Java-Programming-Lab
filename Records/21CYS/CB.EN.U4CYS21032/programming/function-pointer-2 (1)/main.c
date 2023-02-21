/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
float add (int, int);
float sub (int, int);
float mul (int, int);
float divi (int, int);
float add (int a, int b)
{
  return (a + b);
}

float sub (int a, int b)
{
  return (a - b);
}

float mul (int a, int b)
{
  return (a * b);
}

float divi (int a, int b)
{
  return (a / b);
}
int main()
{
   int c=2,d=3,opt;
   float g;
   float (*fun[4])(int ,int)= {add,mul,sub,divi};
   printf("enter option");
   scanf("%d",&opt);
   g=(*fun[opt])(c,d);
   printf("%f",g);
   
}
