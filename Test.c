#include <stdio.h>
void main()
{ int a=1,b=0,c,d=0,e,f ;
 for(a=1;a<=5000;a++ )
 {b=0;
  d=0;
  for (c=a; c!=0 ;c/=10 )
    d++;
  for(c=a;c!=0;c/=10)
  {   f=1;
      for(e=d;e!=0;e--)
       f*=(c%10) ;
      b+=f;
  }
  if (b==a )
  {printf("%d , ", a );
  }
 }
 printf(" \n");
}
