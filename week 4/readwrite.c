#include <stdio.h>

int main(void)
{
    FILE *fwr;
    fwr=fopen("content.txt","w");
    fputs("My name is feroz\n",fwr);
    fputs("Feroz means Alisha\n",fwr);
    fputs("Hello world",fwr);
    fclose(fwr);

    fwr=fopen("content.txt","r");
    char ch[100];
    if (fwr!=NULL)
    {
        while(fgets(ch,100,fwr))
        {
            printf("%s\n",ch);
        }
    }

}
