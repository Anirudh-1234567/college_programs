#include <stdio.h>
void main()
{ int a,b=0,c ;
  printf (" give number \n ");
  scanf ("%d",&a) ;
  c=a ;
  for (b=0; a!=0 ;a/=10 )
  { b+=(c%10)*(c%10)*(c%10) ;
  }
 if (b==a )
 {printf("%d is a Armstrong number ", c );
 }
 else
 {printf("%d is not a Armstrong number", c );
 }
 printf("\n");
}
