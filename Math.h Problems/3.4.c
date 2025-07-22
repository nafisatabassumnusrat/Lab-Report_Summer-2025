#include <stdio.h>
#include <math.h>
#define M_PI 3.14159265358979323846
int main() {
    double t, result;

    printf("Enter angle t (in degrees): ");
    scanf("%lf", &t);

    result = tan(t * M_PI / 180);
    printf("tan(%.2lf°) = %.4lf\n", t, result);

    return 0;
}
