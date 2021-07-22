#include <stdio.h>
#include <stdlib.h>

int main()
{
	int sum=0;
	int num;
	int n,i;
	printf("要输入几个数：\n");
	scanf("%d",&n);

	for(i=1;i<=n;i++)
	{
		printf("请输入第%d个数",i);
		scanf("%d",&num);

		sum += num;
	}

	printf("这%d个数的和为：%d\n",n,sum);

	exit(0);
	
}
