#include <stdio.h>

int main()
{
    int num;
    int i,n;
    printf("请输一个数：\t");
    if(scanf("%d",&num) != 1)
        return 1;
    if(num > 0)
    {
       	for(i=2;i<num;i++)												
        {
            if(num % i == 0)     		 //判断是否能被除自己本身以外的数整除
            {
                printf("不是质数\n");
                return 1;
            }
        }
    	printf("是质数\n");	
	}
    return 0;
}
