// #include<stdio.h>
// struct node
// {
//     int info;
//     struct Node *Link;
// };
// struct node *First = NULL;

// void main(){
//     int a;
//     scanf("%d",&a);
//     Insertfirst(a);
// }
// //This method create a new node and insert at the first position.
//  void Insertfirst(int x){
//     struct node *newnode = (struct node)malloc(sizeof(struct node));
//     newnode->info=x;
//     newnode->Link=First;
//     First=newnode;
//  }
////////////////////////////////////////////////////////////////
// #include <stdio.h>
// #include <stdlib.h>

// struct node {
//     int info;
//     struct node *Link;
// };

// struct node *First = NULL;

// // Function prototype
// void Insertfirst(int x);
// void Display();

// int main() {
//     int a;
//     printf("Enter a number: ");
//     scanf("%d", &a);
//     Insertfirst(a);
    
//     printf("Linked List after insertion:\n");
//     Display();

//     return 0;
// }

// // This function creates a new node and inserts it at the beginning.
// void Insertfirst(int x) {
//     struct node *newnode = (struct node *)malloc(sizeof(struct node));
//     if (newnode == NULL) {
//         printf("Memory allocation failed.\n");
//         return;
//     }
//     newnode->info = x;
//     newnode->Link = First;
//     First = newnode;
// }

// // Display function to print the linked list
// void Display() {
//     struct node *temp = First;
//     while (temp != NULL) {
//         printf("%d -> ", temp->info);
//         temp = temp->Link;
//     }
//     printf("NULL\n");
// }
/////////////////////////////////////////////////////
#include <stdio.h>
#include <stdlib.h>

struct node {
    int info;
    struct node *Link;
};

struct node *First = NULL;

void Insertfirst(int x);
void Display();

int main() {
    // Creating first 3 nodes (added one after the other)
    Insertfirst(30); // Third node
    Insertfirst(20); // Second node
    Insertfirst(10); // First node

    printf("Initial Linked List (3 elements):\n");
    Display();

    // Inserting a new node at first position
    printf("\nInserting 5 at the first position...\n");
    Insertfirst(5);

    printf("Linked List after inserting 4th node at beginning:\n");
    Display();

    return 0;
}

// Function to insert a node at the beginning
void Insertfirst(int x) {
    struct node *newnode = (struct node *)malloc(sizeof(struct node));
    if (newnode == NULL) {
        printf("Memory allocation failed.\n");
        return;
    }
    newnode->info = x;
    newnode->Link = First;
    First = newnode;
}

// Function to display the linked list
void Display() {
    struct node *temp = First;
    while (temp != NULL) {
        printf("%d -> ", temp->info);
        temp = temp->Link;
    }
    printf("NULL\n");
}
