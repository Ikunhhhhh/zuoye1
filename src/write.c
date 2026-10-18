#include<stdio.h>
void write(char*filename)
{
    FILE*iofile=fopen(filename,"a");
    if(iofile==NULL)
    {
        printf("op fai\n");
        return;
    }
    char ck[100];
    printf("write\n");
    fgets(ck,sizeof(ck),stdin);//stdin是标准输入，可以用ck[strcpn(ck,"\n")]='\0'会将\n替换成\0
    int k=fputs(ck,iofile);
    if(k!=EOF)
    {
        printf("w suc\n");
    }
    else{
        printf("w fai\n");
    }
    fclose(iofile);
}