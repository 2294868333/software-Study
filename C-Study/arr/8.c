#include <stdio.h>

int main()
{
    int arr[1000];
    int i,j;
    for(i = 0;i<1000;i++)
    {
        arr[i] = i+1;
    }
    
    
    for(i = 1;i<1000;i++)
    {
        if(arr[i] != 0)
        {
            for(j = i+1;j<1000;j++)
            {
                if(arr[j] % arr[i] == 0)
                {
                    arr[j] = 0;
                }
            }              
        }      
    }

    
    
	
    for(i = 1;i<1000;i++)
    {
        printf("%d ",arr[i]);
    }
	printf("\n");
}
