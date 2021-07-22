#include <stdio.h>

int main()
{
	int a,num,n;
	for(num=30000000;num<=30000200;num++)
	{		
			n=0;
			for(a=2;a<num;a++)
			{
					if(num%a==0)
					{
						n = 1;
						break;
					}
			}
			if(n != 1)
			{
				printf("%d——是素数\n",num);
				//break;
			}
	}

	return 0;
}
