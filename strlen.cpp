#include <stdio.h>
#include <string.h>

int main() {
    char str[100];

    printf("Enter a string: ");
    scanf("%[^\n]s", str);   // reads until newline

    int length = strlen(str);   // library function

    printf("Length of the string: %d\n", length);

    return 0;
}

