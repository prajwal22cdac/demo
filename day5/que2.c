

#include <stdio.h>
int main()
{

    char string[20] = {"Welcome to CDAC Pune"};
    int count = 0;

    for (int i = 19; i >= 0; i--)
    {
        printf("%c", string[i]);
        count += 1;
    }
    printf("\n");
    printf("The length of the string is: %d", count);
}
