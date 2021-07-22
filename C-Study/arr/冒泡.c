#include <stdio.h>
 
 int main()
 {
     int i,j;
     int t=0;
     int arr[9] = {5,3,2,4,1,6,7,9,8};
     
     for(i=0;i<9-1;i++)
     {
         for(j=0;j<9-i-1;j++)
         {
             if(arr[j] > arr[j+1])
             {
                 t = arr[j];
                 arr[j] = arr[j+1];
                 arr[j+1] = t;
             }
         }
     }
     for(i=0;i<9;i++)
     {
              printf("%d ",arr[i]);
     }
	printf("\n");
 }

