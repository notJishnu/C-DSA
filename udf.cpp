#include <stdio.h>

// UDF declaration
void greet();

int main() {
    greet();   // function call
    return 0;
}

// UDF definition
void greet() {
    printf("Hello Jishnu\n");
}

