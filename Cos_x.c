#include <stdio.h>
void main()
{ float a,b,c=1 ,d=1,k=1 ;
  printf (" give x \n ");
  scanf ("%f",&a) ;
  printf("Cos (%f) = " ,a );
  a*=0.0174 ;
  for (b=1; b<=20 ;b++ )
  {k*=(-1)*(a*a);
   k/=((2*b)-1)*(2*b) ;
   c+=k;
  }
  printf (" %f \n",c);
}
