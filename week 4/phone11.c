#include <cs50.h>
#include <stdio.h>

int main(void)
{
    FILE *file = fopen("alisha.csv", "a");


    char *name = get_string("Name: ");
    char *number = get_string("Number: ");

    fprintf(file, "name:%s,number:%s\n", name, number);

    fclose(file);

}
