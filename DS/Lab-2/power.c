#include<stdio.h>
void main(){
    int base,exponent,result=1,i=1;
    printf("enter the base:");
    scanf("%d",&base);
    printf("Enter the exponent:");
    scanf("%d",&exponent);
    while(i<=exponent){
        result*=base;
        i++;
    }
    printf("%d^%d=%d\n",base,exponent,result);

}