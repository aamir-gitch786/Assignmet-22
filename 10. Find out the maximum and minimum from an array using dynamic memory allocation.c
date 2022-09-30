/******************************************************************************
10. Find out the maximum and minimum from an array using dynamic memory allocation
in C.
*******************************************************************************/

#include <stdio.h>
#include<stdlib.h>

int main()
{
   int n,*p,max=-100000,min=999999,tem1,tem2;
    printf("Enter the value of N:\n");
    scanf("%d",&n);
    p=(int*)calloc(n,sizeof(int));
    printf("Enter the array elements\n");
    for(int i=0;i<n;i++)
    {
        scanf("%d",(p+i));
    }
    for(int i=0;i<n;i++)
    {
        if(max<*(p+i))
        {
            max=*(p+i);
        }
 
    }
    for(int i=0;i<n;i++)
    {
    if(min>*(p+i))
        {
           
           min=*(p+i);
        }
 
    }
    printf("Maximum value is %d and minimum value is %d",max,min);
    
    return 0;
}
