#include <stdio.h>
int main()
{

    int arr[5] = {1, 2, 3, 4, 5};

    int *p = arr;
    int (*parr)[5] = &arr;
    printf("%u\n", sizeof(p)); // 8bytes

    printf("%u\n", sizeof(parr));   // 8bytes
    printf("%u\n", sizeof(*p));     // 4bytes
    printf("%u\n", sizeof(*parr));  // 20bytes
    printf("%u\n", sizeof(**parr)); // 4bytes
    for (int i = 0; i < 5; i++)
    {
        printf("%d ", *(*parr + i));
    }


}