#include<stdio.h>
#include"fclose.h"
FILE* fopener(char*filename)
{
   char*filetemp=filename;
   FILE*ioFile=fopen(filetemp,"r+");
   if(ioFile==NULL)
   {
    printf("failed\n");
   }
   else{
    printf("succsess\n");
   //  int k=fclose(ioFile);
   //   if(k==0)
   // {
   //  printf("close success\n");
   // }
   // else if (k==EOF)
   // {
   //  printf("close failed\n");
   // }
   fcloser(ioFile);
   }
   return ioFile;
}