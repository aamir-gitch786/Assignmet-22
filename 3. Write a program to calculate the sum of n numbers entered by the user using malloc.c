/******************************************************************************
3. Write a program to calculate the sum of n numbers entered by the user using malloc
and free.
*******************************************************************************/

#include <stdio.h>
#include<stdlib.h>
int main()
{
 int n,*p,sum=0;
 printf("Enter the values of N:\n");
 scanf("%d",&n);
 p=(int*)malloc(n*sizeof(int));
 printf("Enter the numbers\n");
 for(int i=0;i<n;i++)
 {
     scanf("%d",(p+i));
     sum+=*(p+i);
 }
 printf("Sum of numbers are : %d",sum);
 free(p);
 
    return 0;
}

