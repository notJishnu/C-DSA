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

    // Compare strings using strcmp()
    int result = strcmp(str1, str2);

    // Check result
    if (result == 0) {
        printf("\nStrings are equal.\n");
    } else if (result > 0) {
        printf("\nString 1 is greater than String 2.\n");
    } else {
        printf("\nString 1 is smaller than String 2.\n");
    }

    return 0;
}

