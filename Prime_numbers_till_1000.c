#include <stdio.h>
void main()
{ int a=1 ,b=1,c=0 ;
 for(a=2 ;a<=1000; a++ )
 {c=0 ;
  for (b=1; (b*b)<=a ;b++ )
  {if(a%b==0)
    {c= c+b+(a/b) ;
    }
  }
  if (c== 2*a )
  {printf("%d , ", a );
  }
 }
 printf(" \n");
}
