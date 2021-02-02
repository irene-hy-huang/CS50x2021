#include <cs50.h>
#include <stdio.h>

int main(void)
{
    // TODO: Prompt for start size
    int startN;
    do
    {
        startN = get_int("Start size: ");
    }
    while (startN < 9);

    // TODO: Prompt for end size
    int endN;
    do
    {
        endN = get_int("End size: ");
    }
    while (endN < startN);

    // TODO: Calculate number of years until we reach threshold

    int total = startN;
    int year = 0;

    if (startN == endN)
    {
        year = 0;
    }
    else
    {
        do
    {
        total = total + (total / 3) - (total / 4);
        year += 1;
    }
        while (total < endN);
    }








    // for (; total < endN ;)
    // {
    //     total = total + (total / 3) - (total / 4);
    //     year += 1;
    // }




    // TODO: Print number of years
    printf("Years: %i", year);
}