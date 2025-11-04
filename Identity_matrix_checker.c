#include <stdio.h>
void main ()
{
  int A[10][10] ,m,n, i ,j ,k=0 ;
  printf (" Enter size of Set A ") ;
  scanf ("%d%d", &m,&n);
   printf ("Enter The Elements Of The Set A " );
   printf ("\n");
   for (i=0 ; i<m ; i++)
   { for (j=0 ; j<n ; j++)
      scanf ("%d",&A[i][j] );
     printf ("\n");
   }
   for (i=0 ; i<m ; i++ )
    { for (j=0 ; j<n ; j++ )
      {  if (i==j && A[i][j]!=1)
      break ;
         else  if (i!=j && A[i][j]!=0)
  break ;
else
 k++ ;
       }
       if(j<n)
        break;
    }
      if(i<m)
       printf("This is not a Identity Matrix");
      else
       printf("This is a Identity Matrix");
      printf("%d",k);
      printf(" \n");
}
