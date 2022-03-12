// convert a string to uppercase and lowercase;
#include <stdio.h>
#include <string.h>

int main()
{
    char value[40];
    fgets(value, 40, stdin);
    value[strlen(value) - 1] = '\0';

    for (int i = 0; i < strlen(value); i++)
    {
        if( 122 >= (int) value[i] && (int) value[i] >= 97) {
            value[i] = (int) value[i] - 32;
        }
    }
    printf("%s", value);
}