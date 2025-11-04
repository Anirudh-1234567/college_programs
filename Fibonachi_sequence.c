#include <stdio.h>
void main()
{
int a=0,b=1,c,d;
  printf ("Give a number to print Fibbonacci Sereies upto \n ");
  scanf ("%d",&d) ;
  printf ("0, 1, ") ;
while(c<=d)
{
c=a+b;
if(c>d)
break;
    printf("%d, ",c);
a=b;
b=c;
    }

printf(" \n");
}
