#include<stdio.h>
#include<stdlib.h>
void main ()
{
int *a ,i,j,m,n,p,q,r ;
printf(" Enter The List Size \n");
scanf("%d",&m);
a = (int*) malloc( m * sizeof(int));
printf("Enter The Elements Of Set A : ");
for(i=0;i<m;i++)
scanf("%d",&a[i]);
do{
  printf("\n Give The Search Valus : ");
  scanf("%d",&n);
  p=0;
  r=m-1;
  while(p<=r)
  {    q=(p+r)/2;
       if(n==a[q])
break;
else if (n<a[q])
r=q-1;
else
p=q+1;
  }
  if(p<=r)
   printf(" %d is The  %d element of the list\n",n,q+1);
  else
   printf(" %d is Not An element of the list\n",n);
  printf("Would You Like To Perform Another Search (1/0) ");
  scanf("%d",&j);
 }while(j!=0);
 printf(" \n");
}
