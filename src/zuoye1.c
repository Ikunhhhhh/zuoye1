#include<stdio.h>
#include"print_v.h"
#include"sizeoof.h"
#include"converter.h"
int main()
{
  print_v();
  int a=1;
  print_size(&a,sizeof(a));
  int b=4;
  double c=4.5;
  converter(&b,sizeof(b));
  converter(&c,sizeof(c));
  return 0;    
}