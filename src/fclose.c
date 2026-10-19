#include<stdio.h>
void fcloser(FILE*iofile)
{
    int f=0;
    f=fclose(iofile);     
    if(f!=EOF)
    {
        printf("c suc\n");
    }
    else{
        printf("c fail\n");
    }
}