#include <stdio.h>

// UDF declaration
int factorial(int n);

int main() {
    int num, fact;

    printf("Enter a number: ");
    scanf("%d", &num);

    fact = factorial(num);

    printf("Factorial of %d = %d\n", num, fact);

    return 0;
}

// UDF definition
int factorial(int n) {
    int i, f = 1;
    for(i = 1; i <= n; i++) {
        f = f * i;
    }
    return f;
}

