#include<cs50.h>
#include<stdio.h>
#include<string.h>
int main(void)
{
    string s1[]={"feroz","Sameer","Sadhik","Wahab"};
    string name=get_string("Enter name :");
    for (int i=0;i<4;i++)
    {
        if((strcmp(s1[i],name)==0))
        {
            printf("Found \n");
            return 0;
        }
    }
    printf("not found \n");
    return 1;
}
