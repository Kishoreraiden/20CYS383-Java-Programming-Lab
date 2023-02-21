/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <stdlib.h>
struct node
{
    int val;
    struct node *next;
    
};
int main()
{
    struct node*p;
    p=(struct node*)malloc(sizeof(struct node));
    p->val=9;
    printf("%d",p->val);
    return 0;
    
}

    
