#include<stdio.h>
void main(){
    int array[100];
    int size,i,position;
    printf("Enter the size:");
    scanf("%d",&size);
    printf("Enter the elements of array:");
    for(i=0;i<size;i++){
        scanf("%d",&array[i]);
    }
    printf("Enter the position:");
    scanf("%d",&position);
    if(position<0||position>size){
        printf("no position");
    }
    for(i=position;i<position;i++){
        array[i]=array[i+1];
    }
    size--;
    printf("array is:");
    for(i=0;i<size;i++){
        printf("%d",array[i]);
    }
    printf("\n");
}