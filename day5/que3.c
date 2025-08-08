#include <stdio.h>
#include <string.h>
int main()
{

    char string[] = "23w%#e$$lco--,me";
    char string_result[20] = {0};
    int result_index = 0;

    for (int i = 0; i < strlen(string); i++)
    {
        if ((string[i] >= 'A' && string[i] <= 'Z') || (string[i] >= 'a' && string[i] <= 'z'))
        {
            // string_result += string[i];
            string_result[result_index] = string[i];
            result_index++;
        };
    }

    printf("%s", string_result);
}