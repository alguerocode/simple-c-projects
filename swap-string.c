#include <stdio.h>
#include <string.h>

int main()
{
    char first[] = "test";
    char second[] = "test2";
    char temp[10];

    strcpy(temp, second);
    strcpy(second, first);
    strcpy(first, temp);

    printf("first: %s\n", first);
    printf("second: %s", second);
}