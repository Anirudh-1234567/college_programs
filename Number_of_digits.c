#include <stdio.h>
void main()
{ int a,b=0,c ;
  printf (" give number \n ");
  scanf ("%d",&a) ;
  c=a;
  for (b=0;a!=0 ;b+=1 )
  {a/=10  ;
  };
  printf("The number Of Digits Of %d is %d .\n",c,b );
}
