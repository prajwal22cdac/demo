#include <stdio.h>
#include <math.h>   // For pow() and sqrt()
#include <stdlib.h> // For abs()
#include <ctype.h>  // For toupper()

int main()
{
    double x = -4.0;
    char ch = 'h';
    int result_char;

    // First example: sqrt(pow(2, abs(x)))
    // The functions are executed from the inside out: abs() -> pow() -> sqrt()
    double result_double = sqrt(pow(2, abs(x)));
    printf("Evaluating sqrt(pow(2, abs(%.1f)))\n", x);
    printf("Result: %.2f\n\n", result_double);

    // Second example: putchar(toupper(ch))
    // First, toupper() converts the character, then putchar() prints the result.
    printf("Converting and printing character '%c' using putchar(toupper(ch))\n", ch);
    result_char = putchar(toupper(ch));
    printf("\n");

    return 0;
}
