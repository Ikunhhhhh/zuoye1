#include<stdio.h>
int getbit(void*x)
{
    int val=*(int*)x;
    int bit=0;
    if(val<0)
    {
        val=-val;
    }
    while(val!=0)
    {
        val/=10;
        bit++;
    }
    return bit;
}

void reverser(void*a)//输入一个整数在（1000到999）反向输出
{
  int val=*(int*)a;
  int temp[10]={0};
  int bit=getbit(a);
  int i=0;
  int j=0;
  if(val<0)
  {
    val=-val;
    printf("-");
  }
  for(j=0;j<bit;j++)
  {
    temp[j]=val%10;
    val/=10;
  }
  for(j=0;j<bit;j++)//反向输出
  {
   printf("%d",temp[j]);
  }
  printf("\n");
}