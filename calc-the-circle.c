#include <stdio.h>
#include <string.h>
#include <math.h>

int main()
{
    const double PI = 3.1415926535;
    float radius;
    printf("your radius: ");
    scanf("%f", &radius);


    printf("your circumference: %lf\n",(double) 2 * PI * radius);
    printf("your circle area: %lf", (double) PI * radius * radius);

    return 0;
}