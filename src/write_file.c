#include<stdio.h>
#include"../inc/fclose.h"
#include<string.h>
void write_file(char*filename)
{
    
    FILE*a=fopen(filename,"a");
    int tag=0;
    char arr[100];
    do
    {
    memset(arr,0,sizeof(arr));//清空数组
     scanf("%s",arr);
     int k=fputs(arr,a);
     if(k==EOF)
     {
        printf("w fail\n");
     }
     else
     {
        printf("w suc\n");
     }
     fputc('\n',a);
     printf("continue?1\n");
     scanf(" %d",&tag);
    } while (tag);
    fcloser(a);
    
}