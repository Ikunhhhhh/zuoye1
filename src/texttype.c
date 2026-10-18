#include<stdio.h>
void texttype(void*a)
{
   char input=*(char*)a;
   if((int)input>=65&&(int)input<=90)
   {
    int temp=input+32;
     printf("原本为:%c\n",input);
    printf("小写转换为：%c\n",temp);
   }
   if((int)input>=97&&(int)input<=122)
   {
    int temp=input-32;
     printf("原本为:%c\n",input);
    printf("大写转换为：%c\n",temp);
   }
}