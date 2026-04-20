#include <stdio.h>
#include <string.h>

int main() {
    char str1[100], str2[100];

    // Input first string
    printf("Enter first string: ");
    gets(str1);

    // Input second string
    printf("Enter second string: ");
    gets(str2);

    // Join strings using strcat()
    strcat(str1, str2);

    // Display result
    printf("\nJoined String: %s\n", str1);

    return 0;
}

