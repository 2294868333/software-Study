#include <stdio.h>

int main()
{
	int sn1=1,sn2=1,sum=0;
	int t=0;
	printf("第1项——%d\n",sn1);
	printf("第2项——%d\n",sn2);
	for(t=3;t<=40;t++)
	{
		sum = sn1 + sn2;
		printf("第%d项——%d\n",t,sum);
		sn1 = sn2;
		sn2 = sum;
	}
}
