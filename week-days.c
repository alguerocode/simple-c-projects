#include <stdio.h>

enum Day{Sun = 1, Mon = 2, Tues = 3, Wen = 4, Thurs = 5, Fri = 6, Sat = 7 };
int main()
{
    enum Day today = Sun;

    if(today == Fri || today == Sat) {
        printf("Yahoo, Weekend");
    } else {
        printf("let's start hardworking");
    }

    return 0;
}