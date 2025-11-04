#include <stdio.h>
void main()
{ int a,b=0,c ;
  printf (" give number \n ");
  scanf ("%d",&a) ;
  c=a ;
  for (b=0; a!=0 ;a/=10 )
  { b= (b*10)+ (a%10) ;
  }
 if(b==c )
 {printf ("%d is a palindrome ",c);
 }
 else
 {printf ("%d is not a palindrome ",c);
 }
 printf(" \n");
}
