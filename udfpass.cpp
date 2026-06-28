#include <stdio.h>

// Function declarations
int sum(int a, int b);
int diff(int a, int b);
int product(int a, int b);

int main() {
    int num1, num2;

    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    printf("Sum = %d\n", sum(num1, num2));
    printf("Difference = %d\n", diff(num1, num2));
    printf("Product = %d\n", product(num1, num2));

    return 0;
}

// Function definitions
int sum(int a, int b) {
    return a + b;
}

int diff(int a, int b) {
    return a - b;
}

int product(int a, int b) {
    return a * b;
}

