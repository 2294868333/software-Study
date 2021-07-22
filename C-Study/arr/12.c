#include <stdio.h>

#define N	2
#define M	3

int main()
{
	int arr1[N][M];
    int arr2[M][N];
    int arr3[N][N];
    int num = 0;
    int i,j,z;
    int sum = 0;
    
    printf("请输入第一个矩阵：\n");
    for(i=0;i<N;i++)
    {
        printf("输入第%d行:\n",i+1);
        for(j=0;j<M;j++)
        {
            scanf("%d",&arr1[i][j]);
        }
    }
    printf("请输入第二个矩阵：\n");
    for(i=0;i<M;i++)
    {
        printf("输入第%d行:\n",i+1);
        for(j=0;j<N;j++)
        {
            scanf("%d",&arr2[i][j]);
        }
    }    
    
    for(i=0;i<N;i++)
    {
        for(z=0;z<N;z++)
        {
			sum = 0;
            for(j=0;j<M;j++)
            {
           		 num = arr1[i][j]*arr2[j][z];
                 sum = sum+num;
            }
            arr3[i][z] = sum;
        }
    }
    printf("相乘的矩阵为：\n");
    for(i = 0;i<N;i++)
    {
        for(j = 0;j<N;j++)
        {
            printf("%d ",arr3[i][j]);
        }
        printf("\n");
    }
}
