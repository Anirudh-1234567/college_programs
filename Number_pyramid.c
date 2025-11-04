#include<stdio.h>
void main ()
{
  int a,b=1,c,d ;
  printf ("Enter Height Of The Pyramid ");
  scanf ("%d", &a);
  c=2*a-1;
  for(b=1;b<=a;b++)
  {
  printf ("\n");
for (d=1;d<=c;d++)
{
if(d<(a+b) && d>a)
  printf(" %d ",a+b-d);
else if (d>(a-b) && d<a)
printf(" %d ",b-a+d);
else if (d==a)
printf(" %d ",b);
else
printf("   ");
}
  }
  printf ("\n");
}
