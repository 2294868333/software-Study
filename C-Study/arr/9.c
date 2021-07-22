#include <stdio.h>

int main()
{
	int arr1[2][3] = {{1,2,3},{4,5,6}};
	int arr2[3][2] = {0};
	int i,j;
	for(i=0;i<2;i++)
	{
			for(j=0;j<3;j++)
			{
					arr2[j][i] = arr1[i][j];
			}
	}

	for(i=0;i<3;i++)
	{
		for(j=0;j<2;j++)
		{
			printf("%d",arr2[i][j]);
		}
		printf("\n");
	}
}
