#include <stdio.h>

// Function declarations
int sum(int a, int b);
int diff(int a, int b);
int product(int a, int b);

int main() {
    int x, y;

    printf("Enter two numbers: ");
    scanf("%d %d", &x, &y);

    printf("Sum = %d\n", sum(x, y));
    printf("Difference = %d\n", diff(x, y));
    printf("Product = %d\n", product(x, y));

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

