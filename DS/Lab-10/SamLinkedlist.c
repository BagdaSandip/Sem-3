#include<stdio.h>
#include<stdlib.h>
struct Node {
    int info;
    struct Node* next;
};
struct Node* createNode(int info) {
    struct Node* newNode = (struct Node*) malloc(sizeof(struct Node));
    newNode->info = info;
    newNode->next = NULL;
    return newNode;
}
void inserAtEnd(struct Node* First)