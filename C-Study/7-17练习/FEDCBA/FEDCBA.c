#include <stdio.h>

int main()
{
	int i,j;
	for(i=70;i>=65;i--)
	{
			for(j=70;j>=i;j--)
			{
				printf("%c",j);
			}
			printf("\n");
	}
}
