#include<stdio.h>
#include<stdlib.h>
struct Node{
    int info;
    struct Node* First  
};
struct Node* First=NULL;
void insertFirst(int value) {
    struct Node* newnode = (struct Node*)malloc(sizeof(struct Node));
    if(!newNode){
        printf("Memory Allocation failed");
        return;
    }
    newNode->info = value;
    if(First=NULL){
        newNode->next = newNode;
        First = newNode;
    }
    else{
        struct Node* temp = First;
        while(temp->next !=First)
        temp =temp->next;
        newNode->next = First;
        temp->next = newNode;
        First=newNode;
    }
}
void display(){
    if(First==NULL){
        printf("List is empty");
        return;
    }
    struct Node* temp = First;
    printf("Circular Linked");
    do{
        printf("%d->",temp->info);
        temp=temp->next;
    }
    while(temp != First);
    printf("First");
    }
void main(){
    insertFirst(20);
    insertFirst(30);
    insertFirst(40);
    display();
    return 0;
}