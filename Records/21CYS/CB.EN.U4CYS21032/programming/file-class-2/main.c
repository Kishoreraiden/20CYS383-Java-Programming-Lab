/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int
main ()
{
  FILE *fp;
  int i = 5,j;
  for(i=6;i<0;i++){
    fp = fopen ("file.txt", "a+");
    fprintf (fp, "%d", i); 
  }
  
 // rewind(fp);                      //points to the starting of the file.............(0,0)
 /// fscanf(fp,"%d",&j);
 // printf("%d",j);
  fclose (fp);
  return 0;
}
