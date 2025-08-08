#include <stdio.h>
int main()
{

    int x = 10;
    int *p = NULL;
    int *p1 = NULL;
    int *p2 = NULL;
    *p1; // seg fault
    *p2; // seg fault
    // printf(" %d\n %d\n %d\n", p, p1, p2);
    printf(" p: %d\n p1: %d\n p2: %d\n", p, p1, p2);

    p = &x; // Assume &x=2000
    *p = *p + 5;
    // printf("%d", p);
    p1 = p1 + 5;
    p1 = p + 5;
    printf(" p1+p: %d\n", *p1);
    printf(" p1: %d\n", *p1);
    p2 = p - 5;
    printf(" p: %d\n p1:%d\n p2:%d\n", *p, *p1, *p2);
    // printf(" p: %p\n p1: %p\n p2: %p\n", p, p1, p2);
    p1++;
    p2--;
    p1 - p2;
    // printf(" p: %d\n p1: %d\n p2: %d\n", p, p1, p2);
    printf(" p: %d\n p1: %d\n p2: %d\n", *p, *p1, *p2);

    // *p1;
    // *p2;
}