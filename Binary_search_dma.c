#include<stdio.h>
#include<stdlib.h>
void main ()
{
int *a ,i,j,m,n ;
printf(" Enter The List Size \n");
scanf("%d",&m);
a = (int*) malloc( m * sizeof(int));
printf("Enter The Elements Of Set A");
for(i=0;i<m;i++)
scanf("%d",&a[i]);
do{
  printf("\n Give The Search Valus : ");
  scanf("%d",&n);
  for(i=0;i<m;i++)
   if(*(a+i)==n)
    break;
  if(i<j)
   printf(" %d is The  %d element of the list\n",n,i+1);
  else
   printf(" %d is Not An element of the list\n",n);
  printf("Would You Like To Perform Another Search (1/0) \n ");
  scanf("%d",&j);
 }while(j!=0);
printf(" \n");
}
