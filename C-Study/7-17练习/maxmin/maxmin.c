#include <stdio.h>

int main()
{
    int max = 0;
    int min = 100;
    int score;
    int n=1;
    printf("请输入要比较的成绩:\n");
    while(score != 0)
    {
        printf("请输入第%d项成绩(输入0退出)：\n",n);
        scanf("%d",&score);
        if(score > 100 || score < 0)
        {
        	printf("输入成绩有误\n");
        	return 1;
        }
        if(score > 0)
        {
            max = max < score ? score:max;
            min = min > score ? score:min;
        }
        else
            break;
        n++;

    }

    printf("最大值：%d\n最小值：%d\n",max,min);

    return 0;
}

