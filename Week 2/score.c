#include <stdio.h>
#include<cs50.h>
int main(void) {
    int i;
    int n=get_int("enter no of elements:\n");
    int arr[n];
    for (i=0;i<n;i++)
    {
        arr[i]=get_int("enter %i: ",i+1);
    }
    printf("u enter values\n");
    for (i=0;i<n;i++)

        printf("%i\n",arr[i]);
    }



