#include<stdio.h>
void main(){
    int n;
        if(n==0||n==1){
            return 1;
        }
        else{
            return n*fact(n-1);
        }

    }
