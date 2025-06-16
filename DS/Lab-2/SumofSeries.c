#include <stdio.h>
int main() {
    int n, i, j, sum = 0, temp;
    printf("Enter the value of n: ");
    scanf("%d", &n);
    for(i = 1; i <= n; i++) {
        temp = 0;
        for(j = 1; j <= i; j++) {
            temp += j;
        }
        sum += temp;
    }
    printf("The sum of the series is: %d\n", sum);
}
