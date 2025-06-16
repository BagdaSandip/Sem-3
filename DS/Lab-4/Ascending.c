#include <stdio.h>
void main() {
    int arr[100], n, num, i, pos;
    printf("Enter number of elements in array:");
    scanf("%d", &n);
    printf("Enter %d elements in ascending order:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    printf("Enter the number to insert: ");
    scanf("%d", &num);
    pos = 0;
    while (pos < n && arr[pos] < num) {
        pos++;
    }
    for(i = n; i > pos; i--) {
        arr[i] = arr[i-1];
    }
    arr[pos] = num;
    n++; 
    printf("Array after insertion:\n");
    for()
}