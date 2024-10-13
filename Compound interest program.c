#include <stdio.h>
#include <math.h>

int main() {
    double P, R, T, CI, A;

    printf("Enter principal, rate, and time: ");
    scanf("%lf %lf %lf", &P, &R, &T);

    A = P * pow(1 + R / 100, T);
    CI = A - P;

    printf("Compound Interest: %.2lf\nTotal Amount: %.2lf\n", CI, A);

    return 0;
}
