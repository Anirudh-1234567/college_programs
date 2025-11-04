#include <stdio.h>
#include <stdlib.h>
void main ()
{
  int **A , **B ,**C , m , n , p , q , i ,j ,k=0 ;
  printf (" Enter size of Set A ") ;
  scanf ("%d%d", &m,&n);
  printf (" Enter size of Set B ") ;
  scanf ("%d%d", &p,&q);
  if (n!=p )
   printf (" The Sizes Of the Matrices Dont Mtch Try again wwith Diffrent Sizes ");
  else
  {A = (int**) malloc( m * sizeof(int*));
   B = (int**) malloc( n * sizeof(int*));
   C = (int**) malloc( n * sizeof(int*));
   for(i=0;i<m;i++)
   { A[i]=(int*)malloc(n*sizeof(int));
     C[i]=(int*)malloc(q*sizeof(int));
   }
   for(i=0;i<n;i++)
    B[i]=(int*)malloc(q*sizeof(int));
   printf ("Enter The Elements Of The Set A " );
   for (i=0 ; i<m ; i++)
    for (j=0 ; j<n ; j++)
      scanf ("%d",&A[i][j] );
   printf ("Enter The Elements Of The Set B " );
   for (i=0 ; i<p ; i++)
    for (j=0 ; j<q ; j++)
      scanf ("%d",&B[i][j] );
   for (i=0 ; i<m ; i++)
    for (j=0 ; j<q ; j++)
    { C[i][j]=0 ;
      for (k=0;k<n ;k++ )
       C[i][j]+= (A[i][k])*(B[k][j]);
    }
   for (i=0 ; i<m ; i++)
   { for (j=0 ; j<q ; j++ )
     printf (" %d ",C[i][j] );
    printf (" \n ") ;
   }

  }
printf(" \n");
}
