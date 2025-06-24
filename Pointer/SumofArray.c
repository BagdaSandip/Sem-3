#include <stdio.h>

int main() {
    int n, i, sum = 0;
    int *ptr;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter %d numbers:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", (ptr + i));  
    }

    for (i = 0; i < n; i++) {
        sum += *(ptr + i);      
    }

    printf("Sum = %d\n", sum);
}
