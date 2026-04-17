#include <stdio.h>

// Function declarations
int sum(int a, int b);
int diff(int a, int b);
int product(int a, int b);

int main() {
    int x, y;

    printf("Enter two numbers: ");
    scanf("%d %d", &x, &y);

    int s = sum(x, y);
    int d = diff(x, y);
    int p = product(x, y);

    printf("Sum = %d\n", s);
    printf("Difference = %d\n", d);
    printf("Product = %d\n", p);

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

