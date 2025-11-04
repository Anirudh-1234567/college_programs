#include <stdio.h>
void main()
{ int a,b=1,c ;
  printf (" give number \n ");
  scanf ("%d",&a) ;
  c=a;
  for (b=1;a>=1 ;a-=1 )
  {b*=a;
  };
  printf("The Factroial Of %d is %d .\n ",c,b );
  printf(" \n");
}
