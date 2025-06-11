#include<stdio.h>
void main(){
    int array[100];
    int size,i,location,number;
    printf("Enter the size of array:");
    scanf("%d",&size);
    printf("Enter the elements of array:");
    for(i=0;i<size;i++){
        scanf("%d",array[i]);
    }
    printf("Enter the loction:");
    scanf("%d",&location);
    printf("Enter the number:");
    scanf("%d",&number);
    if(location<0||location>size){
        printf("no location");
    
    }
    for(i=size;i>location;i--){
        array[i] = array[i-1];
        array[location] = array[number];
        size++; 
        printf("The new array is:\n");
        for(i=0; i<size; i++){
            printf("%d",array[i]);
        }
        printf("\n");

    }
}