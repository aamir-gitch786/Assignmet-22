/******************************************************************************
7. Write a program to demonstrate memory leak in C.
*******************************************************************************/
/*when we lost the address of DMA variable in our program then meomory leak occres.
for example:
if we decalre a function and inside that funciton we are declare DMA variable. After excuting that funtion 
all local value free and DMA variable remain consume the memory therefor memory leakage occures.*/
#include <stdio.h>
#include<stdlib.h>
void leak();
int main()
{
    
   leak();
    
    return 0;
}
void leak()
{
    int *p;
    p=(int*)malloc(sizeof(int));
    
}
//here p is SMA therefor it will be free after executing the funtion but DMA variabl remain consume the value.

