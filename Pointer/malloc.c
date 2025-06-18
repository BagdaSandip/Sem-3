#include <stdio.h>
#include <stdlib.h>
int main() {
    int *iptr = (int *)malloc(sizeof(int));
    float *fptr = (float *)malloc(sizeof(float));
    char *cptr = (char *)malloc(sizeof(char));

    if (iptr) {
        printf("Memory allocation failed\n");
    }

    *iptr = 10;
    *fptr = 3.14f;
    *cptr = 'A';

    printf("Integer value: %d\n", *iptr);
    printf("Float value: %.2f\n", *fptr);
    printf("Char value: %c\n", *cptr);
    free(iptr);
    free(fptr);
    free(cptr);
}
