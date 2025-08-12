#include <stdio.h>

int main()
{

    int i = 100;
    float f = 3.14f;
    char c = 'A';

    void *void_ptr;

    // Convert different pointer types to void*
    printf("Original values:\n");
    printf("int i = %d\n", i);
    printf("float f = %.2f\n", f);
    printf("char c = %c\n\n", c);

    // int* to void* and back
    printf("int* to void* conversion:\n");
    void_ptr = &i;
    int *int_ptr = (int *)void_ptr;
    printf("Value through void*: %d\n\n", *int_ptr);

    // float* to void* and back
    printf("float* to void* conversion:\n");
    void_ptr = &f;
    float *float_ptr = (float *)void_ptr;
    printf("Value through void*: %.2f\n\n", *float_ptr);

    // char* to void* and back
    printf("char* to void* conversion:\n");
    void_ptr = &c;
    char *char_ptr = (char *)void_ptr;
    printf("Value through void*: %c\n\n", *char_ptr);

    // Generic function simulation using void*
    printf("Using void* for generic storage:\n");
    void *generic_array[3];
    generic_array[0] = &i;
    generic_array[1] = &f;
    generic_array[2] = &c;

    printf("Stored values: %d, %.2f, %c\n",
           *(int *)generic_array[0],
           *(float *)generic_array[1],
           *(char *)generic_array[2]);

    return 0;
}