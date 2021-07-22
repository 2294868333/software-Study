#include <stdio.h>

int main()
{
	float score;

	printf("请输入您的成绩：\n");
	if(scanf("%f",&score) != 1)
			return 1;

	if(score > 100 || score < 0)
	{
		printf("成绩输入有误\n");
	}
	else if(90 <= score && score <= 100)
	{
		printf("优秀！！！！\n");
	}
	else if(80 <= score && score <90)
	{
		printf("良好！！！\n");
	}
	else if(70 <= score && score <80)
	{
		printf("中等！！\n");
	}
	else if(60 <= score && score < 70)
	{
		printf("及格！\n");
	}
	else
	{
		printf("不及格\n");
	}
	return 0;
}

