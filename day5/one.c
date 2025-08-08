#include <stdio.h>
#include <string.h>
int main()
{

    int a = 10;
    char string[5] = "hello";

    int *prts = string;
    printf("%d\n", string);

    // int *ptra = a;

    float *ptraa = &a;
    // printf("%d", ptra);
    printf("%d", ptraa);
    char ch = 'e';
    int *ptrch = ch;
    printf("\n%d", ch);

    float b = 10;
    printf("\n%d", b);
    // float *ptrb = b;

    double d = 12;
    // int *ptrd = d;

    // mismatching the datatypes with pointes will get u in trouble
    // so the datatype must be same as the variable
}