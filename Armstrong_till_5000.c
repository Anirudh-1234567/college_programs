#include <stdio.h>
void main()
{ int a=1,b=0,c ;
 for(a=1;a<=5000;a++ )
 {c=a ;
  for (b=0; c!=0 ;c/=10 )
  { b+=(c%10)*(c%10)*(c%10) ;
  }
  if (b==a )
  {printf("%d , ", a );
  }
 }
 printf(" \n");
}
