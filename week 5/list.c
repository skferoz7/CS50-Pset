#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int *arr=malloc(3 *sizeof(int));
    arr[0]=1;
    arr[1]=2;
    arr[2]=3;
    int *temp=realloc(arr,4*sizeof(int));
    if (temp==NULL)
    {
        free(arr);
        return 1;
    }
    for (int i=0;i<3;i++)
    {
          temp[i]=arr[i];
    }
    temp[3]=4;
    //free(arr);

    for (int i=0;i<4;i++)
    {
        printf("%i\n",temp[i]);
    }

    return 0;
}
