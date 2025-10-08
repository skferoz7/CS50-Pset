#include <cs50.h>
#include <stdio.h>
#include <string.h>
int main(void)
{
    int key=get_int("Enter key\n");
    string sr=get_string("enter name:");
    int length=strlen(sr);

    printf("After\n");
    for (int i=0;i<length;i++)
    {
        printf("%c",sr[i]+key);
    }
    printf("\n");
}
