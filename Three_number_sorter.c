#include<stdio.h>
void main()
{int a,b,c,d,e,f ;
 printf("enter three numbers \n ") ;
 scanf(" %d %d %d",&a,&b,&c ) ;
 d=a-b ;
 e=b-c ;
 f=c-a ;
 if (d==0)
 {if (a>c)
  {printf("%d and %d  are equal greater than %d \n ",a,b,c ) ;
  }
  else if(a<c)
  {printf("%d and %d  are equal less than %d \n ",a,b,c ) ;
  }
  else
  {printf("%d,%d,%d are equal \n ",a,b,c ) ;
  }
 }
 if (d!=0 && e==0 )
  {if (b>a )
   {printf("%d and %d  are equal greater than %d \n ",b,c,a ) ;
   }
   else
   {printf("%d and %d  are equal less than %d \n ",b,c,a ) ;
   }
  }
 if (d!=0 && e!=0 && f==0 )
 {if (a>b )
  printf("%d and %d  are equal greater than %d \n ",a,c,b ) ;
  else
  {printf("%d and %d  are equal less than %d \n ",a,c,b ) ;
  }
 }
 if (d>0 && f<0 )
 {printf ("%d Is the greatest number \n ", a ) ;
 }
 if (e>0 && d<0 )
 {printf ("%d Is the greatest number \n ", b ) ;
 }
 if (f>0 && e<0 )
 {printf ("%d Is the greatest number \n ", c ) ;
 }
printf(" \n");
}
