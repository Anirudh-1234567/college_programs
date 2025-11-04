#include<stdio.h>
#include<stdlib.h>
void main ()
{
int **a,**at ,i,j,m,n,t ;
printf(" Enter The List Size : ");
scanf("%d%d",&m,&n);
a = (int**) malloc( m * sizeof(int));
at = (int**) malloc( n * sizeof(int));
for(i=0;i<m;i++)
a[i]=(int*)malloc(n*sizeof(int));
for(i=0;i<n;i++)
at[i]=(int*)malloc(m*sizeof(int));
printf("Enter The Elements Of Set A : ");
for(i=0;i<m;i++)
{ for(j=0;j<n;j++)
{ scanf("%d",&a[i][j]);
  at[j][i]=a[i][j];
}
printf(" \n");
}
printf ("The Transposed Matrix Is : \n");
for(i=0;i<n;i++)
 { for(j=0;j<m;j++)
    printf(" %d ",at[i][j]);
   printf("\n");
 }
}
