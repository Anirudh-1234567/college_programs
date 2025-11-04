#include<stdio.h>
void main ()
{
  int a,b=1,c=1 ;
  printf ("Enter Height Of The Pyramid ");
  scanf ("%d", &a);
  for(b=1;b<=a;b++)
  {
  printf ("\n");
for (c=1;c<=b;c++)
printf(" %d ",a-c+1 );
  }
  printf ("\n");
}
