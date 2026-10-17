#include<stdio.h>


void print_size(void*a,size_t size)
{
    printf("The size '%s' is %d bytes\n",(char*)a,size);
}
//printf("the size '%c' is %d bytes\n",*(*char)a,size);这是打印一个字符的状况