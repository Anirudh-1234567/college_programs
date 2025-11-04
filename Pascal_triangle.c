#include<stdio.h>
void main ()
{
  int a,b=1,c,d,e,f,m,n,q ;
  printf ("Enter Height Of The Pyramid ");
  scanf ("%d", &a);
  c=2*a+1;
  a--;
  for(b=0;b<=a;b++)
  {
  m=a+b;
n=a-b;
e=1;
f=0;
printf ("\n");
for (d=0;d<=c;d++)
{
   if ( ((d<=m)&&(d>=n)) && ( ( (a%2==0) && (((b%2==0)&&(d%2==0)) || (b%2==1)&&(d%2==1)) ) || ( (a%2==1) && ( ((b%2==1)&&(d%2==0)) || (b%2==0)&&(d%2==1)) ) ) )
   {
if(f<=b)
{
  printf(" %d ",e);
e*=b-f;
e/=f+1;
}
else
{q++;
}
f++;
   }
   else
    printf ("   ");
}
  }
  printf ("\n");
}
