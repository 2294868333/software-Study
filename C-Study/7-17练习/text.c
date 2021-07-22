#include <stdio.h>
#include <stdlib.h>    
    
int main()
{
    int i,j,k;
    int line;  // 菱形总行数
    int column;  // 菱形总列数
    printf("请输入菱形的行数(奇数)：");
    scanf("%d", &line);
    if(line%2==0)
    {  
        printf("必须输入奇数！\n");
        exit(1);
    }
    column = line;  // 总行数和总列数相同
    
    int space = (column-1)/2;
    for(i=1;i<=(line+1)/2;i++,space--)
    {
        for(j=space;j>0;j--)
        {
            printf(" ");
        }
        for(k=1;k<=2*i-1;k++)
        {
            printf("*");
        }
        for(j=space;j>0;j--)
        {
            printf(" ");
        }
        printf("\n");
    }

    space = 1;
    for(i=(line+1)/2-1;i>0;i--,space++)
    {
        for(j=space;j>0;j--)
        {
            printf(" ");
        }
        for(k=1;k<=2*i-1;k++)
        {
            printf("*");
        }
        for(j=space;j>0;j--)
        {
            printf(" ");
        }
        printf("\n");
    }
    
    return 0;
}
