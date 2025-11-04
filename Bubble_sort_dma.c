#include<stdio.h>
#include<stdlib.h>
void main ()
{
int *a ,i,j,m,n,t ;
printf(" Enter The List Size : ");
scanf("%d",&m);
a = (int*) malloc( m * sizeof(int));
printf("Enter The Elements Of Set A : ");
for(i=0;i<m;i++)
scanf("%d",&a[i]);
for(i=0;i<m-1;i++)
 { for(j=0;j<m-1;j++)
    {
      t=a[j];
      if(a[j]>a[j+1])
       { a[j]=a[j+1];
 a[j+1]=t;
}
    }
 }
printf ("The Sorted List : ");
for(i=0;i<m;i++)
 printf(" %d , " ,a[i]);
 printf(" \n");
}
