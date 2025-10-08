#include <cs50.h>
#include <stdio.h>
 int main(void){
    int arr[]={4,7,2,3,8,5,9,0,1,6};
    int length=10;
   printf("Before list \n");
   for (int i=0;i<length;i++)
   {
    printf("%d\n",arr[i]);
   }
    for (int i=0;i<length;i++)
    {
        for (int j=0;j<(length-1);j++)
        {
            if (arr[j]<arr[j+1])
            {
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
    printf("After list \n");
    for (int i=0;i<length;i++)
    {
        printf(" %d\n",arr[i]);
    }

 }
