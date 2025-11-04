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
      {  if (j>=i && A[i][j]!=0)
      break ;
      }
       if(j<n)
        break;
    }
      if(i<m)
       printf("This is not a Lower Triangular Matrix");
      else
       printf("This is a Lower Triangular Matrix");
      printf("%d",k);
printf(" \n");
}
