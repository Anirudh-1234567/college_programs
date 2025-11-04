#include <stdio.h>
void main()
{ int a,b=1,c=1 ;
  printf (" give number \n ");
  scanf ("%d",&a) ;
  printf ("The factors of %d are \n ",a ) ;
  for (b=1; b*b<=a ;b++ )
  {if(a%b==0)
   {printf ("- (%d , %d )\n ", b,a/b );
    c++ ;
   }
  }
  printf("The Number of factors of %d is %d .\n ",a ,c++ );
printf(" \n");
}
