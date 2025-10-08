#include<stdio.h>
#include<cs50.h>

int main(void)
{
    long card;
    do
    {
        card=get_long("Number ");
    }
    while(card<0);

    long temp = card;
    int length = 0;

    do
    {
        length++;
        temp /= 10;  //calculate length of card
    }
    while(temp > 0);
    if (length != 13 && length != 15 && length != 16)
    {
        printf("INVALID\n");
        return 0;
    }

    int sum1 = 0,sum2 = 0,total = 0;
    long mod1,mod2,d1,d2;
    temp=card;

    do
    {
        mod1 = temp % 10;
        sum1 += mod1;
        temp /= 10;

        mod2 = temp %10;
        mod2 = mod2 * 2;
        d1 = mod2 /10;
        d2 = mod2 %10;
        sum2 = sum2 + d1 + d2;

        temp /= 10;
    }
    while(temp>0);

    total = sum1 + sum2;

    if(total %10 !=0)
    {
        printf("INVALID\n");
        return 0;
    }
    else
    {
        long start=card;
        do
        {
            start /= 10;
        }
        while(start >= 100);
        if ((length == 13 || length == 16) && start/10 == 4)
        {
            printf("VISA\n");
        }
        else if((length == 15) && (start == 34 || start == 37))
        {
            printf("AMEX\n");
        }
        else if((length == 16) && (start > 50 && start < 56))
        {
            printf("MASTERCARD\n");
        }
        else
        {
            printf("INVALID\n");
            return 0;
        }
    }

}

