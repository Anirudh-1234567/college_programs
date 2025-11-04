#include <stdio.h>
void main()
{ float a,b,c=0 ,d=1,k=1;
  printf (" give x : ");
  scanf ("%f",&a) ;
  printf("Log (%f) = " ,a );
  for (b=1; b<=20 ;b++ )
  {c+=k;
   k*=a/b;
   }
  printf (" %f \n",c);
}
