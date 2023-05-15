#include <cs50.h>
#include <stdio.h>

int main(void)
{
    // TODO: Prompt for start size
    int n = 0;
    while (n < 9)
    {
        n = get_int("Start Size: ");
    }
    // TODO: Prompt for end size
    int end = 0;
    while (end < n)
    {
        end = get_int("End Size:");
    }
    // TODO: Calculate number of years until we reach threshold
    int years = 0;
    if (n != end)
    {
        do
        {
            n += (n / 3) - (n / 4);
            years ++;
        }
        while (n < end);
    }
    // TODO: Print number of years
    printf("Years: %i \n", years);
}
