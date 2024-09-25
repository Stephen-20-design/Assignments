#include <stdio.h>

int main() {
    float principal, time, rate, interest;

    printf("principal: ");
    scanf("%f", &principal);

    printf("time: ");
    scanf("%f", &time);

    printf("rate: ");
    scanf("%f", &rate);

    // Calculate simple interest
    interest = (principal * time * rate) / 100;

    printf("Simple Interest: %.2f\n", interest);

    return 0;
}
