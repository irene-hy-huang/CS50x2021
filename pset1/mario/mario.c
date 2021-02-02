#include <cs50.h>
#include <stdio.h>

int main(void)
{
    // Prompting for height
    int height;
    do
    {
        height = get_int("Give me a number: ");
    }
    while (height < 1 || height > 8);

    // print right-algned pyramid
    for (int i = 0; i < height; i++)
    {
        // print space before hash
        for (int k = 0 ; k < (height - 1 - i) ; k++)
        {
            printf(" ");
        }

        // print hash by the number of height
        for (int j = 0; j <= i; j++)
        {
            printf("#");
        }
        printf("\n");
    }
}