/******************************************************************************
8. Write a program to demonstrate dangling pointers in C.
*******************************************************************************/
/*A pointer pointing to a memory location that has been deleted is called dangling pointer*/
#include <stdio.h>
void *f();
int main()
{
   int *a;
   a=f();
 return 0;
}
void *f()
{
    printf("Äamir");
}