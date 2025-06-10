#include<stdio.h>
void main(){
    int n,sum=0;
    float Avg;
    printf("enter the number:");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        sum=sum+i;
    }
    Avg=sum/n;
    printf("The Sum of first %d number is  = %d\n",n,sum);
    printf("the average is=%f",Avg);

}



