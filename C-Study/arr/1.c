#include <stdio.h>

int main()
{
		int arr[10];
		int i,j;
		arr[9] = 1;
		arr[8] = 1;
		for(i = 7;i>0;i--)
		{
				arr[i] = arr[i+2]+arr[i+1];       
		}
		for(j = 9;j>0;j--)
		{
				printf("%d\t",arr[j]);
		}
		printf("\n");
}
