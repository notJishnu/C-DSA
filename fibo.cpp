#include <stdio.h>

// UDF declaration
void fibonacci(int n);

int main() {
    int terms;

    printf("Enter number of terms: ");
    scanf("%d", &terms);

    fibonacci(terms);   // function call

    return 0;
}

// UDF definition
void fibonacci(int n) {
    int a = 0, b = 1, c, i;

    printf("Fibonacci Series: ");

    // print first two terms
    if (n >= 1) printf("%d ", a);
    if (n >= 2) printf("%d ", b);

    // generate rest of the terms
    for(i = 3; i <= n; i++) {
        c = a + b;
        printf("%d ", c);
        a = b;
        b = c;
    }
}

