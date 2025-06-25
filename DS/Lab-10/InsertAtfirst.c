#include<stdio.h>
#include<stdlib.h>

 struct node {
     int info;
     struct node *Link;
 };

 struct node *First = NULL;

 void Insertfirst(int x);
void Display();

 int main() {
    int a;
    printf("Enter a number: ");   
     scanf("%d", &a);
    Insertfirst(a);
        printf("Linked List after insertion:\n");
     Display();
    return 0; }
void Insertfirst(int x) {
    struct node *newnode = (struct node *)malloc(sizeof(struct node));     
    if (newnode == NULL) {
        printf("Memory allocation failed.\n");
        return;}
    newnode->info = x;
     newnode->Link = First;
     First = newnode;
 }
 void Display() {
struct node *temp = First;
     while (temp != NULL) {
         printf("%d -> ", temp->info);
         temp = temp->Link;
     }
     printf("Null\n");

    }



    //insertAtlast
#include <stdio.h>
#include <stdlib.h>


struct Node {
    int data;
    struct Node* next;
};

struct Node* First = NULL;

void insertAtEnd(int value) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = value;
    newNode->next = NULL;
    if (First == NULL) {
        First = newNode; //
    } else {
        struct Node* temp = First;
        while (temp->next != NULL) {
            temp = temp->next;
        }

        temp->next = newNode;
    }
}
void display() {
    struct Node* temp = First;
    while (temp != NULL) {
        printf("%d -> ", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");
}
int main() {
    insertAtEnd(10);
    insertAtEnd(20);
    insertAtEnd(30);

    printf("Linked List: ");
    display();

    return 0;
}

