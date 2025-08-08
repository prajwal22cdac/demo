#include <stdio.h>
int main()
{

    char str[10] = {
        'h',
        'h',
        'h',
        'h',
        'h',
        'h',
        'h',
        'h'};
    char *p;
    p = str;
    while (*p != '\0')
    {
        printf("%c", *p);
        p++;
    }
}
