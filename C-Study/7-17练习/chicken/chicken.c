#include <stdio.h>

int main()
{
    int x;
    int y;
    int z;
    int cont;
    int sum; 
	for(x=0;x<100;x++)
    {
         for(y=0;y<100;y++)
         {
             for(z=0;z<100;z++)
             {
                 cont = 5*x + 3*y + z/3;
                 sum = x+y+z;
                 if(cont == 100 && z%3==0 && sum == 100)
        		 {
           			 printf("公鸡：%d  母鸡：%d  小鸡：%d\n",x,y,z);
       			 }
             }
         }
    }
                 
}

