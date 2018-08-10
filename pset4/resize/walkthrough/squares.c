#include <stdio.h>
#include <stdlib.h>
#include "cs50.h"

int main(int argc, char* argv[])
{
    if (argc != 4)
    {
        printf("Usage: ./squares rows column");
        return 1;
    }

    int rows = atoi(argv[1]);
    int cols = atoi(argv[2]);
    int scale = atoi(argv[3]);

    for(int i = 0; i <= rows * scale+(rows*scale%2); i++)
    {
        for(int j = 0; j <= cols * scale+(rows*scale%2); j++)
        {
            printf("o ");
        }
        printf("\n");
    }

    //printf("%i %i", rows, cols);
    return 0;
}