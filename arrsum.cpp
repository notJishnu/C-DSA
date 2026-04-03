#include <stdio.h>

// UDF declarations
void displayArray(int arr[], int n);
int sumArray(int arr[], int n);

int main() {
    int n, i;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Array elements: ");
    displayArray(arr, n);

    int sum = sumArray(arr, n);
    printf("\nSum of elements = %d\n", sum);

    return 0;
}

// UDF to display array
void displayArray(int arr[], int n) {
    int i;
    for(i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
}

// UDF to calculate sum
int sumArray(int arr[], int n) {
    int i, sum = 0;
    for(i = 0; i < n; i++) {
        sum += arr[i];
    }
    return sum;
}

