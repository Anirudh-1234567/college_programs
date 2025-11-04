#include <stdio.h>
void main()
{ int a,b=2 ;
  for (a=2;a<=1000;a++)
  {b=2 ;
   for (b=2; b*b<=a ;b++ )
   {if(a%b==0)
    {break ;
    }
   }
    if ((b*b)>a )
    {printf("%d, ",a);
    }
  }
printf(" \n");
}
