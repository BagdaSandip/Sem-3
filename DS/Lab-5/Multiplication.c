#include <stdio.h>

int main() {
    int mat1[3][2], mat2[2][3], C[3][3];

    printf("Enter elements of first  matrix:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 2; j++) {
            printf("mat1[%d][%d]: ", i, j);
            scanf("%d", &mat1[i][j]);
        }
    }
    printf("Enter elements of second matrix:\n");
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 3; j++) {
            printf("mat2[%d][%d]: ", i, j);
            scanf("%d", &mat2[i][j]);
        }
    }
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++){
            C[3][3] = 0;
        }
    }
    printf("\nMultiplication of the two matrices:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
        for(int k=0;k<2;k++){
            C[i][j]+=mat1[i][k] *mat2[k][j];
        }
    }
}
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            printf("%d\t", C[i][j]);
        }
        printf("\n");
    } 

}