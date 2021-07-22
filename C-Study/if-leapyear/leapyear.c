#include <stdio.h>

int main()
{
	int year;
	printf("请输入年份：\n");
	if(scanf("%d",&year) != 1)
			return 1;
	
	if(year%4 == 0 && year%100 != 0)
	{
			printf("是闰年\n");
	}
	else if(year%400 == 0)
	{
			printf("是闰年\n");
	}
	else
	{
			printf("不是闰年\n");
	}
}
