#include <stdio.h>

int main() {
    // Declare variables for the two numbers and their sum
    int num1, num2, sum;

    // Ask user to input two numbers
    printf("Enter the first number: ");
    scanf("%d", &num1);

    printf("Enter the second number: ");
    scanf("%d", &num2);

    // Calculate the sum of the two numbers
    sum = num1 + num2;

    // Display the result
    printf("The sum of %d and %d is %d\n", num1, num2, sum);

    return 0;
}
