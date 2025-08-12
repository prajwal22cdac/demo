#include <stdio.h>

// The swap function takes two integer pointers as arguments.
void swap(int *a, int *b)
{
    int temp = *a; // Store the value at address 'a' in a temporary variable.
    *a = *b;       // Assign the value at address 'b' to the address 'a'.
    *b = temp;     // Assign the value from the temporary variable to the address 'b'.
}

int main()
{
    int num1 = 10, num2 = 20;

    printf("Before swap: num1 = %d, num2 = %d\n", num1, num2);

    // Pass the addresses of num1 and num2 to the swap function.
    swap(&num1, &num2);

    printf("After swap: num1 = %d, num2 = %d\n", num1, num2);

    return 0;
}
