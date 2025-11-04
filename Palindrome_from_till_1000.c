#include <stdio.h>
void main()
{ int a=1 ,b=0,c ;
  for (a=1; a<=1000 ;a++ )
  {c=a ;
   b=0 ;
   while (c!=0)
   { b= (b*10)+ (c%10) ;
     c/=10 ;
   }
    if(b==a )
    {printf ("%d ",a);
     }
  }
  printf(" \n");
}
