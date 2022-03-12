#include <stdio.h>

typedef char username[15];

typedef struct {
    char username[15];
} User;

int main()
{
    username userOne = "alguerocode";
    User userTwo = {"alguerocode"};

    printf("%s\n", userOne);
    printf("%s", userTwo.username);
    return 0;
}
