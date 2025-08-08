// Implement a calculator program with the help of pointers,
//  note that no function should return any value,
// use pointers to implement the same.
#include <stdio.h>
int main()
{
    //   char ch = '+';
    int a = 5;
    int b = 4;
    int sum;
    // int *a = &a;
    int *ptrs = &sum;
    int *ptr1 = &a;

    int *ptr2 = &b;

    // char *ptr = &ch;

    *ptrs = *ptr1 + *ptr2;
    printf("%d", *ptrs);
}