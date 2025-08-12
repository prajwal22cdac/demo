#include <stdio.h>
#include <math.h>

int isArmstrong(int number)
{

    int digit = 0;
    int lenght = 0;

    int temp = number;
    while (temp > 0)
    {
        lenght++;
        temp = temp / 10;
    }
    int sum = 0;
    temp = number;
    while (temp > 0)
    {
        digit = temp % 10;
        temp = temp / 10;
        sum += pow(digit, lenght);
    }
    if (sum == number)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int main()
{
    int number;
    scanf("%d", &number);

    if (isArmstrong(number))
    {
        printf("It is an armstrong number!");
    }
    else
    {
        printf("It is not an armstrong number!");
    }
}