#include <stdio.h>
int main()
{

    // const int but var pointer
    const int *p;
    int y = 500;
    const int x = 10;

    p = &x;
    // x = 20;   these two will not be allowed   because a is constant.
    // *p = 100;

    printf("p: %d\n", p = p + 1);
    printf("p: %d\n", p = &y);

    /// same const int and var point
    /// can also be written as: int const *p; same thing as above

    // p is a pointer to a constant intger or integer constant

    // not pounte is constant and int is not constant
    int z = 10;
    int *const ptr = &z;
    z = 20;
    printf("z:%d\n", z);

    *ptr = 100;
    printf("z:%d", *ptr); // this is allowed

    // ptr = ptr + 1;
    // ptr = &y;   these are not allowed because ptr is constant

    // when both int and ptr are constant
    const int a = 10;
    // const int *const p = &a;

    const *ptra = &a;

    // a = 10;
    // *ptra = 100;  //not allowed
    printf("\nptra: %d", ptra);
    ptra = ptra + 1;
    // ptra = &y;
    printf("\nptra: %d", ptra = ptra + 1);
    printf("\nptra: %d", *ptra);
}