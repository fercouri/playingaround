#include <stdio.h>
#include <cs50.h>

int main(void)
{
    // Get input between 1 and 8 from user
    int h = get_int("Height: ");
    while (h < 1)
    {
        h = get_int("Please enter a height between 1 and 8: ");
    }
    while (h > 8)
    {
        h = get_int("Please enter a height between 1 and 8: ");
    }

    // Build the # pyramid
    int x, y, s;
    for (y = 0; y < h; y++) // adds 1 to y until we reach the threshold (h)
    {
        // Align the pyramid
        for (s = h - 1; s > y; s--) 
        {
            printf(" "); // puts space before each #
        }
        for (x = -1; x < y; x++) // adds 1 # each line until we reach the threshold (y)
        {
            printf("#");
        }
        printf("\n");
    }
}