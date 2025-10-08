#include <stdio.h>

int main(void)
{
    int arr[] = {6, 3, 8, 4, 9, 1, 0, 2, 7, 5};
    int l = 10;

    for (int i = 0; i < l - 1; i++)
    {
        int min = i;
        for (int j = i + 1; j < l; j++)
        {
            if (arr[j] < arr[min])
                min = j;
        }
        
        if (min != i)
        {
            int temp = arr[i];
            arr[i] = arr[min];
            arr[min] = temp;
        }
    }

    for (int i = 0; i < l; i++)
    {
        printf("%d\n", arr[i]);
    }
}
