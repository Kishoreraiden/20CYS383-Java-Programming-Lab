
/*#include<stdio.h>
struct ab
{
    char c[24];
    int i;
    float j;
   
}a;
int main()
{
    int n;
    n=sizeof(a);
    printf("%d\n", n);
    return 0;
}*/
union ab
{
    char c[24];
    int i;
    float j;
   
}a;
int main()
{
    int n;
    n=sizeof(a);
    printf("%d\n", n);
    return 0;
}
