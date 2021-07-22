#include <stdio.h>
#include <math.h>

int main()
{
        int a,b,c;
        double s,area;
        printf("请输入三角形的边长\n");
        printf("a=");
        scanf("%d",&a);
        printf("\nb=");
        scanf("%d",&b);
        printf("\nc=");
        scanf("%d",&c);

	/*if error*/
	if(a+b <= c || b+c <= a || a+c <= b)
	{
		printf("构不成三角形\n");
		return 1;
	}
	
	s = 1.0/2*(a+b+c);
	area = sqrt(s*(s-a)*(s-b)*(s-c));
	printf("s = %lf\n",s);
	printf("area = %lf\n",area);
	
	return 0;
}
