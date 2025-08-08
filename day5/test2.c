#include <stdio.h>
int main()
{

    int x = 10;
    void *vptr = &x;
    printf("(vptr+1)= %u\n", (int *)vptr);
    printf("(vptr+1)= %u\n", (int *)vptr + 1);

    printf("*vp=%d\n", *(int *)vptr);
    printf("*vp=%d\n", *((int *)vptr));

    printf("*vp=%u\n", *(int *)vptr + 1);
    printf("*vp=%u\n", *((int *)vptr + 1));
    printf("*vp=%d\n", *(int *)vptr + 1);
    printf("*vp=%d\n", *((int *)vptr + 1));
}