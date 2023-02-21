/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int a[2]={1,2};
    int b[2][3]={{4,5,6},{7,8,9}};
    int i,j;
    for (i=0;i<2;i++){
        printf("%p",(a+i));
        printf("\n%d\n",*(a+i));
    
    }
    return 0;
}
