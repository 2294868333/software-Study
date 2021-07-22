#include <stdio.h>

int main()
{
    int i,j,t,n;
    while(1)
    {
        printf("输入一个数：\n");
        scanf("%d",&n);
        n = 64+n;
        
		for(i=n;i>=65;i--)
		{
			for(t=n;t>i;t--)
			{
				printf(" ");
			}

			for(j=n;j>=i;j--)
			{			
				printf("%c",j);
			}
			printf("\n");

		}            
    }
}
