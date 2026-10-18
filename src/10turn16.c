#include<stdio.h>
void turner(int x)
{
    int i=0;
    char save[100]; 
    if(x==0)
    {
        printf("0\n");
        return;
    }
    if(x<0)
    {
        printf("-");
        x=-x;
    }
  while(x!=0)
  {
    if(x%16<10){
   save[i++]=x%16+'0';
   x/=16;
   }
   else{
    switch (x%16)
    {
    case 10:
    save[i++]='A';
    break;
    case 11:
    save[i++]='B';
    break;
    case 12:
    save[i++]='C';
    break;
    case 13:
    save[i++]='D';
    break;
    case 14:
    save[i++]='E';
    break;
    case 15:
    save[i++]='F';
    break;
    }
    x/=16;
   }
  }
  for(int j=i-1;j>=0;j--)//逆序输出
  {
    printf("%c",save[j]);
  }
   printf("\n");
}