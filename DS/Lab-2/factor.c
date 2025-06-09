#include<stdio.h>
void main(){
    int number,i=1;
    printf("Enter a number:");
    scanf("%d",&number);
    printf("factors of %d are:",number);
    while(i<=number){
        if(number%i==0){
            printf("%d",i);
        }
        i++;
    }
    printf("\n");
}