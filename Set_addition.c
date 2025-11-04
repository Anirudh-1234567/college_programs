#include <stdio.h>
void main ()
{
  int A[50] , B [50] ,C [50] , m , n , i ,j ,k=0 ;
  printf (" Enter size of Set A ") ;
  scanf ("%d", &m);
  printf ("Enter The Elements Of The Set A " );
  for (i=0 ; i<m ; i++)
     scanf ("%d",&A[i]);
  printf (" Enter size of Set b ") ;
  scanf ("%d", &n);
  printf ("Enter The Elements Of The Set B " );
  for (i=0 ; i<n ; i++)
     scanf ("%d",&B[i]);
  for (j=0 ; j<n ; j++)
  {
    for (i=0 ; i<m ; i++ )
    {
      if ( A[i] == B[j] )
      { C[k++]=B[j];
        break;
      }
    }
  }
  printf (" The Intersection Of Set A And Set B is : { ");
  for (i=0; i<k ; i++)
   printf (" %d , ",C[i]);
  printf(" } \n");
}
