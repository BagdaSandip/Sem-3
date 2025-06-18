#include<stdio.h>
void main(){
    int n;
    printf("Enter the  number of Elements:");
    scanf("%d",&n);
    int arr[n];
    int *ptr=arr;
    for(int i=0;i<n;i++){
       scanf("%d",ptr+i); 
    }
    printf("Array elements:\n");
    for(int i=0;i<n;i++){
        printf("%d",*(ptr+i));
    }

    
}