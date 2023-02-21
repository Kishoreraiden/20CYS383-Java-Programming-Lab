/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
int add (int, int);
void
main ()
{
  int c = 2, d = 3, g;
  int (*fun) (int, int) = add;
  g = add (c, d);		// directly call address
  printf ("%d\n", g);
  g = (*fun) (c, d);		//calling add function using pointer 
  printf ("%d", g);

}

int
add (int a, int b)
{
  return (a + b);
}
