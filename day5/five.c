#include <stdio.h>

int main()
{
    unsigned int a = 0x11223344;
    char *ptr = (char *)&a;

    printf("Byte 1: 0x%02x\n", (unsigned char)*ptr);
    printf("Byte 2: 0x%02x\n", (unsigned char)*(ptr + 1));
    printf("Byte 3: 0x%02x\n", (unsigned char)*(ptr + 2));
    printf("Byte 4: 0x%02x\n", (unsigned char)*(ptr + 3));

    return 0;
}