#include <cs50.h>
#include <ctype.h>
#include <math.h>
#include <stdio.h>
#include <string.h>

int main(void)
{
    string t = get_string("Text: ");
    int s = 0, l = 0, w = 1;

    // Count letters, words, sentences
    for (int i = 0, n = strlen(t); i < n; i++)
    {
        if (t[i] == ' ')
        {
            w++;
        }
        else if (t[i] == '.' || t[i] == '!' || t[i] == '?')
        {
            s++;
        }
        else if (isalpha(t[i]))
        {
            l++;
        }
    }

    // Calculate L and S
    float L = (float) l / w * 100;
    float S = (float) s / w * 100;

    // Coleman-Liau index
    int index = round(0.0588 * L - 0.296 * S - 15.8);

    // Output grade
    if (index < 1)
    {
        printf("Before Grade 1\n");
    }
    else if (index >= 16)
    {
        printf("Grade 16+\n");
    }
    else
    {
        printf("Grade %d\n", index);
    }
}
