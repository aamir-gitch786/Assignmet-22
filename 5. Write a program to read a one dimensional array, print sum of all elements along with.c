/******************************************************************************
5. Write a program to read a one dimensional array, print sum of all elements along with
inputted array elements using dynamic memory allocation.
*******************************************************************************/

#include <stdio.h>
#include<stdlib.h>
int main()
{
    int *p,sum=0;
    p=(int*)calloc(5,sizeof(int));
    printf("Enter 5 values :\n");
    for(int i=0;i<5;i++)
    {
        scanf("%d",(p+i));
        sum+=*(p+i);
    }
    printf("Sum of elemetns is %d",sum);
    
    return 0;
}

