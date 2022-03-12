#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
    srand(time(0));

    // random number between 1 to 10
    int randomNum = rand() % 10 + 1;
    
    printf("%d", randomNum);

    return 0;
}