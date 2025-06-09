#include<stdio.h>
void main(){
    int n,i=2,count=0;
    printf("Enter a number:");
    scanf("%d",&n);
    while(i<=n-1){
        if(n%i==0){
            count+=1;
        }
        i++;
    }
    if(count==0){
        printf("number is prime");
    }
    else{
        printf("number is not prime");
    }

}