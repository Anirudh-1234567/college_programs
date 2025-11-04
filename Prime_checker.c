#include <stdio.h>
void main()
{ int a,b=1,c=1 ;
  printf (" give number \n ");
  scanf ("%d",&a) ;
  for (b=1; b*b<=a ;b++ )
  {if(a%b==0)
   {c++ ;
   }
  }
 if (c==2 )
 {printf("%d is prime ", a );
 }
 else
 {printf("%d is not prime ", a );
 }
 printf(" \n");

}
