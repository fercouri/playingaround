#include <stdio.h>
#include <cs50.h>
#include <math.h>

int main(void)
{
    // Get input for the change from user
    float x = get_float("How much change is owed?\n");
    
    // re-prompt the user if input is negative 
    while (x < 0)
    {
        x = get_float("Please enter a positive value: ");
    }

    int c = round(x * 100);

    // Calculate the number of coins needed
    int y = 0;
    int q = 0;
    int d = 0;
    int n = 0;
    int p = 0;
    
    while (c >= 25) // calculate how many quarters are used
    {
        c -= 25;
        q++;
        y++;
    }
    while (c >= 10) // calculate how many dimes are used
    {
        c -= 10;
        d++;
        y++;
    }
    while (c >= 5) // calculate how many nickels are used
    {
        c -= 5;
        n++;
        y++;
    }
    while (c >= 1) // calculate how many pennies are used
    {
        c -= 1;
        p++;
        y++;
    }
    
    // Print the amount of coin needed and how many of each
    printf("%i coins, %i quarters, %i dimes, %i nickels and %i pennies\n", y, q, d, n, p);
    
}