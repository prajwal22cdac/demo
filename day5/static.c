#include <stdio.h>

// This function increments and prints a count each time it's called.
void count_calls()
{
    // The 'static' keyword ensures this variable retains its value
    // between function calls and is initialized only once.
    static int count = 0;
    count++;
    printf("The function has been called %d time(s).\n", count);
}

int main()
{
    printf("Calling the function for the first time.\n");
    count_calls();

    printf("\nCalling the function again.\n");
    count_calls();

    printf("\nCalling the function for a third time.\n");
    count_calls();

    return 0;
}
