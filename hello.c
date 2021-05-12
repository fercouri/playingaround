#include <stdio.h>
#include <cs50.h>

int main(void)
{
    // Get input from user 
    string name = get_string("What is your name?\nA: ");

    printf("Hello, %s!\n", name);
}