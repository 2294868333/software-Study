#include <stdio.h>

#define M       3.0E-23         //定义一个水分子质量
#define water   950             //定义1夸脱水质量
#define n       (water/M)       //定义1夸脱水含有的水分子数     

int main()
{
    
        int kuatuo;			 	//定义要输入的夸脱数变量
        double numb; 				//定义总水分子数
        printf("请输入水的夸脱数\n");
        scanf("%d",&kuatuo);
        numb = n*kuatuo;			//计算kuatuo个夸脱数水所含有的水分子数,赋值给numb
        printf("%d夸脱水中包含水分子数为：%lf\n",kuatuo,numb);
		printf("%d夸脱水中包含水分子数为：%e\n",kuatuo,numb);	// %e->以科学计数法的方式显示
        return 0;
} 
