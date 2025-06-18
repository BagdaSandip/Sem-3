#include<stdio.h>
void main(){
    int mat1[2][2],mat2[2][2],sum[2][2];
    printf("Enter the Elements of First Matrix:");
    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
            printf("mat1[%d][%d]:",i,j);
            scanf("%d",&mat1[i][j]);
        }
    }
        printf("Enter the Elements of Second Matrix:");
        for(int i=0;i<2;i++){
            for(int j=0;j<2;j++){
                printf("mat2][%d][%d]:",i,j);
                scanf("%d",&mat2[i][j]);
            }
        }
        for(int i=0;i<2;i++){
            for(int j=0;j<2;j++){
                sum[i][j]=mat1[i][j]+ mat2[i][j];
            }
        }
       printf("\nMultiplication of the two matrices:\n");
        for(int i=0;i<2;i++){
            for(int j=0;j<2;j++){
                printf("%d\t",sum[i][j]);
            }
            printf("\n"); 
        }
    }
