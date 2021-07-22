#include <stdio.h>
#include <math.h>
int main()
{
	int a;
	int b;
	int c;
	float temp;
	float r1;
	float r2;
	printf("请输入方程的a,b,c的值\n");
	if(scanf("%d%d%d",&a,&b,&c) != 3)
			return 1;
	temp = b*b-4*a*c;

	if(temp <= 0)
	{
			printf("方程无解\n");
			return 1;
	}

	r1 = (-b+sqrt(temp))/(2*a);
	r2 = (-b-sqrt(temp))/(2*a);

	printf("方程的根为：\nr1=%f\nr2=%f\n",r1,r2);
	

	
}
