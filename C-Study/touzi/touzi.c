#include <stdio.h>

int main()
{
	float D1 = 100;
	float D2 = 100;
	int year=0;
	while(D1>=D2)
	{
		D1 = D1+10;
		D2 = D2*0.05+D2;
		year++;
	}	
	printf("需要%d年D2的投资额才会超过D1\n",year);
	printf("D1投资额：%.2f\n",D1);
	printf("D2投资额：%.2f\n",D2);
}
