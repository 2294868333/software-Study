#include <stdio.h>
 
 int main()
 {
     int i,j;
     int t=0;
     int min;
     int arr[9] = {5,3,23,4,1,56,7,98,8};
     for(i=0;i<9-1;i++)
     {
         min = i;
         for(j=i+1;j<9;j++)
         {
             if(arr[min] > arr[j])
             {
                 min = j;
             }  
                 t = arr[min];
                 arr[min] = arr[i];
                 arr[i] = t;                   
               
         }
     }
     for(i=0;i<9;i++)
     {
              printf("%d ",arr[i]);
     }
	printf("\n");
 }

