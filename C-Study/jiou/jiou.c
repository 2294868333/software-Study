#include <stdio.h>

int main()
{

        int n = 1;					//定义提示输入变量
        int e = 0;					//定义偶数
        int o = 0;					//定义奇数
        int ret;    				//定义需要输入的变量
        float esum=0;				//定义偶数求和
        float osum=0;				//定义技术求和
        float eaver=0;				//定义偶数平均值
        float oaver=0;				//定义奇数平均值

        do
        {
                printf("请输第%d个数(输入0退出输入)：\n",n);
                n++;
                if(scanf("%d",&ret) != 1)
                    	return 1;
            
                if(ret%2 == 0)
                        {
                                e++;				//计数
                                esum=esum+ret;		//求和
                                eaver=esum/e;		//求平均值
                        }
                else
                        {
                                o++;				//计数
                                osum=osum+ret;		//求和
                                oaver=osum/o;   	//求平均值
                        }
        }while(ret != 0); 

        printf("偶数的个数为：%d平均值为：%.2f\n",e,eaver);
        printf("奇数的个数为：%d平均值为：%.2f\n",o,oaver);

        return 0;

}

