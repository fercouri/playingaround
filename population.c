#include <cs50.h>
#include <stdio.h>
#include <math.h>

int main(void)
{
    // TODO: Prompt for start size
    int n = get_int("Start size: ");
    
    while (n < 9)
    {
        n = get_int("Please enter a number greater than 9: ");
    }
    
    // TODO: Prompt for end size
    int f = get_int("End size: ");
    
    while (f < n)
    {
        f = get_int("Please enter a number greater than start size: ");
    }
    
    if (f == n)
    {
        printf("Years: 0\n");
    }

    // TODO: Calculate number of years until we reach threshold
    float t;
    for(t=0; f > n; t++)
    {
        n = n + n/3 - n/4;
    }
    
    // TODO: Print number of years
    {
        printf("Years: %f\n", t);
    }
}

