#include<stdio.h>
#include<stdlib.h>

struct node {
    int info;
    struct Node* Link;
};

struct Node* createNode(int info){
    struct Node*  newNode=(struct Node*)malloc(sizeof(struct Node));
    newNode->Link = Link;
    newNode->next=NULL;
    return newNode;
}
void Duplicate(struct Node* First){
    struct Node* current = First;
    while(current)
}