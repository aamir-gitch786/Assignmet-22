/******************************************************************************
6. Write a program in C to find the largest element using Dynamic Memory Allocation.
*******************************************************************************/

#include <stdio.h>
#include<stdlib.h>
int main()
{
    int *p,sum=0,min=-1000000,tem;
    p=(int*)calloc(5,sizeof(int));
    printf("Enter 5 values :\n");
    for(int i=0;i<5;i++)
    {
        scanf("%d",(p+i));
    }
    for(int i=0;i<5;i++)
    {
        if(min<*(p+i))
        {
            tem=min;
            min=*(p+i);
            *(p+i)=tem;
        }
    }
    printf("Maximum value is %d",min);
    
    return 0;
}

