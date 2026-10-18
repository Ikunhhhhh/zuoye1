#include<stdio.h>
#include<math.h>
void converter(void*a, size_t size)
{
    if(size==sizeof(int))
    {
     int val=*(int*)a;
     printf("十进制是%d\n",val);
     if(val<0)
     {
        printf("-");
        val=-val;
     }
     int binary[32]={0};
     int i=0;
     while (val>0)
     {
        binary[i]=val%2;
        i++;
        val/=2;
     }
     //逆序打印
     for(int j=i-1;j>=0;j--)
     {
        printf("%d",binary[j]);
     }
     printf("\n");
    }
    
     if(size==sizeof(double))
    {
        double val=*(double*)a;
        if(val<0)
        {
            val=fabs(val);//将负数改为正数
            printf("-");
        }
        int part_int=(int)val;
        double part_frac=val-part_int;
        if(part_int==0)
        {
            printf("0");
        }
        else{
        int binary[32]={0};
        int i=0;
        while (part_int>0)
        {
            binary[i++]=part_int%2;
            part_int/=2;
        }
        for(int j=i-1;j>=0;j--)
        {
          printf("%d",binary[j]);
        }
        }
        if(part_frac>0)
        {
            printf(".");
        
        int count=0;//限制小数位
        while(part_frac>0&&count<5)
        {
            part_frac*=2;
            int bit=(int)part_frac;//取整
            printf("%d",bit);
            part_frac-=bit;//保留小数位继续进位
            count++;
        }
        }
    printf("\n");
    }
    if(size!=sizeof(int)||size!=sizeof(double))
    {
        printf("Unknown type\n");
    }

}