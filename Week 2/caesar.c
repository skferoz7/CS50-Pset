#include <cs50.h>
#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, string argv[])
{
    if (argc != 2)
    {
        printf("Usage: ./caesar key\n");
        return 1;
    }
    for (int i = 0, n = strlen(argv[1]); i < n; i++)
    {
        if (isdigit(argv[1][i]) == 0)
        {
            printf("Usage: ./caesar key\n");
            return 1;
        }
    }
    int key = atoi(argv[1]);

    string plaintext = get_string("Plaintext:");

    printf("Ciphertext: ");
    for (int i = 0, n = strlen(plaintext); i < n; i++)
    {
        char a = plaintext[i];

        if (isalpha(a))
        {
            if (isupper(a))
            {
                // Shift within A-Z
                printf("%c", (a - 'A' + key) % 26 + 'A');
            }
            else
            {
                // Shift within a-z
                printf("%c", (a - 'a' + key) % 26 + 'a');
            }
        }
        else
        {
            // Non-alphabetic characters remain the same
            printf("%c", a);
        }
    }
    printf("\n");
}
