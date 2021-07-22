#include <stdio.h>

void max()
{
	int arr[2][3] = {1,2,3,4,5,6};
	int i,j;
	int max1 = 0;
	int max2 = 0;
	for(i = 0 ; i<2 ; i++)
	{
		for(j = 0 ; j<3 ; j++)
		{
			if(arr[max1][max2] < arr[i][j])
			{
				arr[max1][max2] = arr[i][j];
				max1 = i;
				max2 = j;
			}
		}
	}
	printf("最大元素值：%d 行号:%d 列号:%d\n",arr[max1][max2],max1,max2);
}

#define N	18
#define M	20
void sum()
{
	int arr[N][M];
	int sum1[N];
	int sum2[M];
	int i,j;
	int k = 0;
	int num=0;
	for(i = 0;i<N;i++)
	{
		for(j = 0;j<M;j++)
		{
			arr[i][j] = k;
			k++;
		}
	}
	for(i = 0;i<N;i++)
	{
		for(j = 0;j<M;j++)
		{
			printf("%d ",arr[i][j]);
		}
		printf("\n");
	}



	for(i = 0;i<N;i++)
	{
		num = 0;
		for(j = 0;j<M;j++)
		{
			num = num+arr[i][j];
		}
		sum1[i] = num;
	}
	num = 0;
	for(i = 0;i<N;i++)
	{
		printf("第%d行之和为:%d \n",i+1,sum1[i]);
		num = num+sum1[i];
	}

	printf("\n");

	for(i = 0;i<M;i++)
	{
		num = 0;
		for(j = 0;j<N;j++)
		{
			num = num+arr[j][i];
		}
		sum2[i] = num;
	}
	num = 0;
	for(i = 0;i<M;i++)
	{
		printf("第%d列之和为:%d \n",i+1,sum2[i]);
		num = num+sum2[i];
	}

	printf("\n所有元素之和为: %d\n",num);
	

}



int main()
{
//	max();
	sum();

}
