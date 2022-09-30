/******************************************************************************

2. Write a program to ask the user to input a number of data values he would like to
enter then create an array dynamically to accommodate the data values. Now take
the input from the user and display the average of data values.
*******************************************************************************/

#include <stdio.h>
#include<stdlib.h>
int main()
{
 int n,*ptr,sum=0;
 
 printf("Enter the number of data values ");
 scanf("%d",&n);
 ptr=(int*)calloc(n,sizeof(int));
 printf("Enter the values :\n");
 for(int i=0;i<n;i++)
 {
     scanf("%d",&*(ptr+i));
     sum+=*(ptr+i);
 }
 printf("Average is %.2f",sum/(n*1.0));

    return 0;
}

