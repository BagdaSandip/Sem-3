#include<stdio.h>
void main(){
    int a;
    printf("enter the value of a:");
    scanf("%d",&a);
    int b;
    printf("enter the value of b:");
    scanf("%d",&b);
    int c;
    printf("enter the value of c:");
    scanf("%d",&c);
   if(a>b &&a>c){
    printf("a is bigger");
   }
   else if (b>a && b>c){
    printf("b is bigger");
   }
   else if (c>a && c>b){
    printf("c is bigger");
   }
   
} 