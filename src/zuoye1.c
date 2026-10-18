#include<stdio.h>
#include<direct.h>//获取当前的工作目录
#include"print_v.h"
#include"sizeoof.h"
#include"converter.h"
#include"texttype.h"
#include"fopen.h"
int main()
{
  char cwd[100];
  if(_getcwd(cwd,sizeof(cwd))!=NULL)
  {
    printf("当前的工作目录是：%s\n",cwd);
  }
  char file[100]="../src/test.txt";
  fopener(file);
  print_v();
  int a=1;
  print_size(&a,sizeof(a));
  int b=4;
  double c=4.5;
  converter(&b,sizeof(b));
  converter(&c,sizeof(c));
 
  int intput=0;
  char type='0';
  do
  {
    printf("\n");
    printf("type:a-z or A-Z\n");
    scanf(" %c",&type);
    texttype(&type);
    printf("0 to exti\n");
    scanf(" %d",&intput);    
  } while (intput);
  
  return 0;    
}