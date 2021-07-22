#include<stdio.h>

int main()
{
    int i = 10 , j = 300;			//整型变量
    float f = 3.14;				//实型变量(浮点型)   注意:定义变量，不能以数字开头
    int num;
    /*打印输出*/
    printf("hello world!\n");
    printf("显示每个变量的值\n");
    printf("i = %d\nj = %d\nf = %f\n",i,j,f);
    /*打印变量加法->方法一*/
    printf("显示变量i+j的和\n");
    printf("NUM = %d\n",i+j);
    /*打印变量加法->方法二*/
    num = i+j;
    printf("显示变量i+j的和\n");
    printf("num = %d\n",num);
    
    return 0;
}

