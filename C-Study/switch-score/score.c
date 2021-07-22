#include <stdio.h>

int main()
{
	float score;
	int t;
	printf("请输入您的成绩：\n");
	if(scanf("%f",&score) != 1)
			return 1;
	t = score/10;
	
	if(score > 100 || score <0)
	{
		printf("成绩输入有误\n");
	}
	else
	{
	
		switch(t)
		{
				case 10:
						printf("满分！！！！！\n");
						break;
				case 9:
						printf("优秀！！！！\n");
						break;
				case 8:
						printf("良好！！！！\n");
						break;
				case 7:
						printf("中等！！\n");
						break;
				case 6:
						printf("及格！\n");
						break;
				default:
						printf("不及格\n");
						break;
		}
	}
	return 0;
}

