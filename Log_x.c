#include <stdio.h>
void main()
{ float a,b,c=0 ,d=1,k;
  printf (" give x : ");
  scanf ("%f",&a) ;
  k=a-1;
  printf("Log (%f) = " ,a );
  for (b=1; b<=100 ;b++ )
  {c+=k/b;
   k*=(a-1)*(-1);
  }
  printf (" %f \n ",c);
printf(" \n");
}
