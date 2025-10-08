#include <cs50.h>
#include <ctype.h>
#include <stdio.h>
#include <string.h>

int main(void)
{
    string name = get_string("Name  ");
    int n = strlen(name);
    int i;
    for (i = 0; i < n; i++)
    {
        if (name[i] >= 'a' && name[i] <= 'z')
        {
            printf("%c", (name[i] - ('a' - 'A')));
        }
        else if (name[i] >= 'A' && name[i] <= 'Z')
        {
            printf("%c", (name[i] - ('A' - 'a')));
        }
    }
    printf("%c", name[i]);
    printf("\n");
}
