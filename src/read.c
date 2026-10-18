#include<stdio.h>
void read(char*filename)
{
    FILE*ioFile=fopen(filename,"r");
    if(ioFile==NULL)
    {
     printf("open failed\n");
    }
    else{
        printf("open suc\n");
        char ch='0';
        do
        {
            printf("%c",ch);
            ch=fgetc(ioFile);
        } while (ch!=EOF);
        printf("\n");
       int k=fclose(ioFile);
        if(k!=EOF)
        {
            printf("c suc\n");
        }
        else{
            printf("c fai\n");
        }
    }

}