#include<stdio.h>
void main(){
    int n,r,i=0;
    printf("enter the number:");
    scanf("%d",&n);
    while(n!=0){
        r=n%10;
        i=i*10+r;
        n=n/10;
    }
    printf("the reverse number is %d",i);

}