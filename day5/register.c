#include <stdio.h>

int main()
{
    register int counter = 10;

    // This line will cause a compilation error because 'counter' is a register variable
    // int *ptr = &counter;

    printf("The variable is at a non-addressable location.\n");

    return 0;
}