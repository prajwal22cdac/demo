// Q1: Implement your own string length finding program,
// print the length of the given string.

#include <stdio.h>
int main()
{

    char string[5] = {"hello"};
    int count = 0;

    for (int i = 0; i < 5; i++)
    {
        printf("%c", string[i]);
        count += 1;
    }
    printf("\n");
    printf("The length of the string is: %d", count);


}
