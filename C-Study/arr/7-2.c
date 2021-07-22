#include <stdio.h>

int main()
{
    int arr[10]={1,2,3,4,5,6,7,8,9};
    int i,p;
    int num = 100;
    printf("请输入想要插入的位置（0~9）：\n");
    scanf("%d",&p);
    
    for(i=9;i>=p;i--)
    {
        arr[i] = arr[i-1];
    }
    arr[p] = num;
    for(i=0;i<10;i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\n");
}
