#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int height;

    //check if input is correct
    do
    {
        height = get_int("What's the height of your pyramid? (need to be a number between 1 and 8) ");
    }
    while
    (height < 1 || height > 8);

    for (int i = 0; i < height; i++)
    {

//spaces
        for (int j = height; j > (i + 1); j--)
        {
            printf(" ");
        }

//pyramid hashes
        for (int j = 0; j <= i; j++)
        {
            printf("#");
        }

//spaces between pyramids
        printf("  ");

//more pyramid hashes
        for (int j = 0; j <= i; j++)
        {
            printf("#");
        }

//lineskip
        printf("\n");


    }

}