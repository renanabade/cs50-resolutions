#include <cs50.h>
#include <stdio.h>

int main(void)
{
    // TODO: Prompt for start size

    int size;
    int endSize;

    do
    {
        size = get_int("Start size of the population (need to be equal or higher than 9): ");
    }
    while (size < 9);

    // TODO: Prompt for end size

    do
    {
        endSize = get_int("Start size of the population (need to be equal or higher than start size): ");
    }
    while (endSize < size);

    // TODO: Calculate number of years until we reach threshold

    int years = 0;

    while (size < endSize)
    {
        size = size + (size / 3) - (size / 4);
        years++;
    }

    // TODO: Print number of years

    printf("Years: %i\n", years);
}
