#include <stdio.h>
#include <string.h>

int main()
{
    char user_input[40];
    fgets(user_input, 40, stdin);
    user_input[strlen(user_input) - 1] = '\0';
    for (int i = 0; i < (int) strlen(user_input) / 2; i++)
    {
        char temp = user_input[i];
        user_input[i] = user_input[strlen(user_input) - i - 1];
        user_input[strlen(user_input) - i - 1] = temp;
    }
    printf("%s", user_input);
    return 0;
}