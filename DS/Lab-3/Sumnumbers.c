#include <stdio.h>

int main() {
    int m, n, sum = 0;
    printf("Enter the starting number m: ");
    scanf("%d", &m);

    printf("Enter the ending number n: ");
    scanf("%d", &n);
    if (m > n) {
        printf("Invalid range. 'm' should be less than or equal to 'n'.\n");
    }
    for (int i = m; i <= n; i++) {
        sum += i;
    }
    printf("The sum from %d to %d is: %d\n", m, n, sum);
}

