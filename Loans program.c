//c program to determine whether a customer will be able to qualify a loan 

#include <stdio.h>

int main() {
    int age;
    float income;

    // Input prompts for age and income
    printf("Enter your age: ");
    scanf("%d", &age);
    
    printf("Enter your annual income (in Ksh): ");
    scanf("%f", &income);

    // Check if customer qualifies for a loan
    if(age >= 21 && income >= 21000) {
        printf("Congratulations, you qualify for a loan.\n");
    } else {
        printf("Unfortunately, we are unable to offer you a loan at this time.\n");
    }

    return 0;
}
