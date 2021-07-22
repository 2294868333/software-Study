#include <stdio.h>

int main()
{
    int arr[10]={1,2,3,4,5,6,7,8,9};
    int i;
    int num = 100;
    for(i=9;i>=0;i--)
    {
        arr[i] = arr[i-1];
    }
    arr[0] = num;
    for(i=0;i<10;i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\n");
}
