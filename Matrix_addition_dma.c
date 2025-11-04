#include <stdio.h>
#include <stdlib.h>
void main ()
{
  int **A , **B ,**C , m , n , p , q , i ,j ,k=0 ;
  printf (" Enter size of Set A ") ;
  scanf ("%d%d", &m,&n);
  printf (" Enter size of Set B ") ;
  scanf ("%d%d", &p,&q);
  if (p!=m || q!=n )
   printf (" The Sizes Of the Matrices Dont Mtch Try again wwith Diffrent Sizes ");
  else
  {
   A  = (int**) malloc( m * sizeof(int*));
   B  = (int**) malloc( m * sizeof(int*));
   C  = (int**) malloc( m * sizeof(int*));
   for(i=0;i<m;i++)
   { A[i] = (int*) malloc( n * sizeof(int));
     B[i] = (int*) malloc( n * sizeof(int));
     C[i] = (int*) malloc( n * sizeof(int));
   }
   printf ("Enter The Elements Of The Set A " );
   for (i=0 ; i<m ; i++)
    for (j=0 ; j<n ; j++)
      scanf ("%d",&A[i][j] );
   printf ("Enter The Elements Of The Set B " );
   for (i=0 ; i<p ; i++)
    for (j=0 ; j<q ; j++)
      scanf ("%d",&B[i][j] );
   for (i=0 ; i<p ; i++)
    for (j=0 ; j<q ; j++)
      C[i][j]=A[i][j] + B[i][j];
   for (i=0 ; i<m ; i++)
   { for (j=0 ; j<n ; j++ )
     printf (" %d ",C[i][j] );
    printf (" \n ") ;
   }
  }
printf(" \n");
}
