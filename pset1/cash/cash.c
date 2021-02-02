#include <cs50.h>
#include <stdio.h>
#include <math.h>

int main(void)
{
    // input changes
    float changes;
    do
    {
        changes = get_float("Change owed: ");
    }
    while (changes <= 0);

    // round the dollar to cent
    int cents = round(changes * 100);

    // count coins
    int coins = 0;


    // divide for quarters
    for (; cents >= 25;)
    {
        cents -= 25;
        coins += 1;
    }

    // divide for dimes
    for (; cents >= 10;)
    {
        cents -= 10;
        coins += 1;
    }

    // divide for nickels
    for (; cents >= 5;)
    {
        cents -= 5;
        coins += 1;
    }

    // divide for pennies
    for (; cents >= 1;)
    {
        cents -= 1;
        coins += 1;
    }

    printf("%i", coins);

}