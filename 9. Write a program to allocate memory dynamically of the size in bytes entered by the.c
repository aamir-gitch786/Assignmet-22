/******************************************************************************
9. Write a program to allocate memory dynamically of the size in bytes entered by the
user. Also handle the case when memory allocation is failed.
*******************************************************************************/

#include <stdio.h>
#include<stdlib.h>

int main()
{
    int n,*p;
    printf("Enter the number of variable\n");
    scanf("%d",&n);
    p=(int*)calloc(n,sizeof(int));
    if(p==NULL)
    printf("fail");
    
    return 0;
}
