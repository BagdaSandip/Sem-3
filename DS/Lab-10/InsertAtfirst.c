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
    printf("Enter a number: ");     scanf("%d", &a);
    Insertfirst(a);
        printf("Linked List after insertion:\n");
     Display();

    return 0; }

 // This function creates a new node and inserts it at the beginning.
void Insertfirst(int x) {
    struct node *newnode = (struct node *)malloc(sizeof(struct node));     if (newnode == NULL) {
        printf("Memory allocation failed.\n");
        return;}
    newnode->info = x;
     newnode->Link = First;
     First = newnode;
 }

 //Display function to print the linked list
 void Display() {
struct node *temp = First;
     while (temp != NULL) {
         printf("%d -> ", temp->info);
         temp = temp->Link;
     }
     printf("Null\n");

    }
