// Implement a calculator program with the help of pointers,
//  note that no function should return any value,
// use pointers to implement the same.
#include <stdio.h>

// Calculator functions - no return values, use pointers
void add(int *a, int *b, int *result)
{
    *result = *a + *b;
}

void subtract(int *a, int *b, int *result)
{
    *result = *a - *b;
}

void multiply(int *a, int *b, int *result)
{
    *result = *a * *b;
}

void divide(int *a, int *b, int *result)
{
    if (*b != 0)
    {
        *result = *a / *b;
    }
    else
    {
        printf("Division by zero!\n");
        *result = 0;
    }
}

int main()
{

    int num1, num2, result;
    char op;

    printf("Enter first number: ");
    scanf("%d", &num1);
    printf("Enter operator (+, -, *, /): ");
    scanf(" %c", &op);
    printf("Enter second number: ");
    scanf("%d", &num2);

    // Using pointers to pass values
    switch (op)
    {
    case '+':
        add(&num1, &num2, &result);
        break;
    case '-':
        subtract(&num1, &num2, &result);
        break;
    case '*':
        multiply(&num1, &num2, &result);
        break;
    case '/':
        divide(&num1, &num2, &result);
        break;
    default:
        printf("Invalid operator\n");
        return 1;
    }

    printf("Result: %d %c %d = %d\n", num1, op, num2, result);
    printf("Result stored at address: %p\n", (void *)&result);

    return 0;
}