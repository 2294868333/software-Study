#include <stdio.h>

int main()
{
    int num,base,i;
    int j=0;
    int arr[100];
    printf("请输入要转换的数字：\n");
    scanf("%d",&num);
    printf("请输入要转换的进制类型：\n");
    scanf("%d",&base);
    
    if(base != 2 && base != 8 && base != 16)
    {
        printf("ERROR\n");
        return 1;
    }

    for(i=0;i<100;i++)
    {
        arr[i] = num%base;
        num = num/base;
        if(num == 0)
        {
            break;
        }
        j++;
    }
	if(base == 8)
	{
			printf("0");
            for(i=j;i>=0;i--)
            {
                printf("%d",arr[i]);
            }         
	}
	if(base == 16)
	{
			printf("0x");
            for(i=j;i>=0;i--)
            {
                if(arr[i] >= 10)
                {
                	printf("%c",arr[i]-10+'A');                    
                }
                else
               		 printf("%d",arr[i]);                    

            }         
	}
    if(base == 2)
    {
         for(i=j;i>=0;i--)
        {
            printf("%d",arr[i]);
        }        
    }
   
   
    printf("\n");
    
    return 0;
}
