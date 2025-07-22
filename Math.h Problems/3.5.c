#include <stdio.h>
#include <math.h>
#define M_PI 3.14159265358979323846
int main() {
    double t, result;

    printf("Enter angle t (in degrees): ");
    scanf("%lf", &t);

    double radians = t * M_PI / 180;
    if (tan(radians) != 0)
        result = 1 / tan(radians);
    else {
        printf("cotangent is undefined at %.2lf°\n", t);
        return 1;
    }

    printf("cot(%.2lf°) = %.4lf\n", t, result);

    return 0;
}
