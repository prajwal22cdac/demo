#include <stdio.h>

void add(int *, int *, int *);
void sub(int *, int *, int *);
void mul(int *, int *, int *);
void div(int *, int *, int *);

int main()
{

    int a = 10;
    int b = 5;
    int sum;

    int choice = 1;

    int *ptr1 = &a;
    int *ptr2 = &b;
    int *ptrs = &sum;

    switch (choice)
    {
    case 1:
        add(ptr1, ptr2, ptrs);
        printf("sum: %d\n", *ptrs);
        break;

    default:
        break;
    }
}

void add(int *ptr1, int *ptr2, int *ptrs)
{

    *ptrs = *ptr1 + *ptr2;
}