#include <stdio.h>
void main()
{ int a,b=0,c ;
  printf (" give number \n ");
  scanf ("%d",&a) ;
  c=a;
  for (b=0;a>=1 ;a/=10 )
  {b+=a%10 ;
  };
  printf("The Sum Of Digits Of %d is %d .\n",c,b );
}
