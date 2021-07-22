#include <stdio.h>

int main()
{
	int i,j,t;
	int k=0;
    int z=65;
	for(i=70;i>=65;i--)
	{
		for(t=0;t<k;t++)
		{
			printf(" ");
		}	
		for(j=70;j>=z;j--)
		{
			printf("%c",j);
		}
        z++;
		k++;
		printf("\n");
	}
}
