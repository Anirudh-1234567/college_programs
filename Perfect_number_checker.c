#include <stdio.h>
void main()
{ int a,b=1,c=0 ;
  printf (" give number \n ");
  scanf ("%d",&a) ;
  for (b=1; b*b<=a ;b++ )
  {if(a%b==0)
   {c= c+b+(a/b) ;
   }
  }
 if (c== 2*a )
 {printf("%d is a perfect number ", a );
 }
 else
 {printf("%d is not a  perfect number", a );
 }
 printf(" \n");
}
