#include<stdio.h>
void main(){
    int i=1,number;
    unsigned long long factorial=1;
    printf("Enter a number:");
    while(i<=number){
        factorial*=i;
        i++;
    }
    printf("factorial of %d\n",number,factorial);
    
}

