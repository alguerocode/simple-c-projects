#include <stdio.h>
#include <math.h>

int main()
{

    double opposite;
    double adjacent;

    scanf("%lf", &opposite);
    scanf("%lf", &adjacent);

    double result = sqrt(opposite * opposite + adjacent * adjacent);

    printf("result: %lf", result);
    return 0;
}