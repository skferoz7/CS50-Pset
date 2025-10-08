// Modifies the volume of an audio file
#include <cs50.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
typedef uint8_t bit8;
typedef int16_t bit16;

// Number of bytes in .wav header
const int HEADER_SIZE = 44;

int main(int argc, char *argv[])
{
    // Check command-line arguments
    if (argc != 4)
    {
        printf("Usage: ./volume input.wav output.wav factor\n");
        return 1;
    }

    // Open files and determine scaling factor
    FILE *input = fopen(argv[1], "r");
    if (input == NULL)
    {
        printf("Could not open file.\n");
        return 1;
    }

    FILE *output = fopen(argv[2], "w");
    if (output == NULL)
    {
        printf("Could not open file.\n");
        return 1;
    }

    float factor = atof(argv[3]);

    // TODO: Copy header from input file to output file
    bit8 header[HEADER_SIZE];
    fread(header, HEADER_SIZE, 1, input);
    fwrite(header,HEADER_SIZE,1,output);

    // TODO: Read samples from input file and write updated data to output file
     bit16 temp;
     while (fread(&temp, sizeof(bit16), 1, input) !=0)
     {
        temp *= factor;
        fwrite(&temp, sizeof(bit16), 1, output);
     }
    // Close files
    fclose(input);
    fclose(output);
}
