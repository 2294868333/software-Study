#include <stdio.h>

int main()
{
	int i,j,t;
	int k=0;
	for(i=70;i>=65;i--)
	{
		for(t=0;t<k;t++)
		{
			printf("_");
		}	
		for(j=70;j>=i;j--)
		{
			printf("%c",j);
		}
		k++;
		printf("\n");
	}
}
