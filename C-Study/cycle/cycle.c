#include <stdio.h>

/*
#define pi      3.14      		//定义宏常量pi
*/

int main()
{
	
	int r;			//定义圆的半径
	float pi = 3.14;	//定义圆周率
	float s,c;		//定义圆的面积，周长
	printf("请输入圆的半径\n");
	scanf("%d",&r);
	s = pi*r*r;		//求圆的面积
	c = 2*pi*r;		//求圆的周长
	printf("圆的面积:%f\n",s);
	printf("圆的周长:%f\n",c);

	return 0;
}
