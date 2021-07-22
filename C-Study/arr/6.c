#include <stdio.h>

int main()
{
    int arr[10]={1,2,3,4,5,100,7,8,9,10};
    int i;
    int max = 0;
    for(i = 1;i<10;i++)
    {
        if(arr[max] < arr[i])
        {
            arr[max] = arr[i];
            max = i;
        }
    }
    printf("数组中最大的数为：%d\t所在下标为：%d\n",arr[max],max);
}
