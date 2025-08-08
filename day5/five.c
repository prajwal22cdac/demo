#include <stdio.h>
int main()
{

    unsigned int a = 0x11223344;
    char *ptr = &a;
    //     printf("%d\n", *(ptr + 1));
    //     printf("1:%x\n", ptr + 1);
    //     printf("%x\n", ptr + 2);
    //     printf("%d\n", *(ptr + 2));
    //     printf("%x\n", ptr + 3);
    //     printf("%d\n", *(ptr + 3));
    //     printf("%x\n", ptr + 4);
    //     printf("%d\n", *(ptr + 4));
    //

    printf("%x", *ptr);
    
}