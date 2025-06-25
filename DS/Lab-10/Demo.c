#include <stdio.h>
#include <stdlib.h>

// Define a node structure
struct Node {
    int data;
    struct Node* next;
};

// Function to create a new node
struct Node* createNode(int data) {
    struct Node* newNode = (struct Node*) malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->next = NULL;7
    return newNode;
}

// Function to insert at the end
void insertEnd(struct Node** head, int data) {
    struct Node* newNode = createNode(data);
    if (*head == NULL) {
        *head = newNode;
        return;
    }
    struct Node* temp = *head;
    while (temp->next != NULL)
        temp = temp->next;
    temp->next = newNode;
}

// Function to compare two linked lists
int areSame(struct Node* head1, struct Node* head2) {
    while (head1 != NULL && head2 != NULL) {
        if (head1->data != head2->data)
            return 0;
        head1 = head1->next;
        head2 = head2->next;
    }
    // If both are NULL, then they are equal
    return (head1 == NULL && head2 == NULL);
}

// Function to print a linked list (optional)
void printList(struct Node* head) {
    while (head != NULL) {
        printf("%d -> ", head->data);
        head = head->next;
    }
    printf("NULL\n");
}

int main() {
    struct Node* list1 = NULL;
    struct Node* list2 = NULL;

    // Example input for both lists
    insertEnd(&list1, 10);
    insertEnd(&list1, 20);
    insertEnd(&list1, 30);

    insertEnd(&list2, 10);
    insertEnd(&list2, 20);
    insertEnd(&list2, 30);

    // Check if they are same
    if (areSame(list1, list2))
        printf("The linked lists are SAME.\n");
    else    
        printf("The linked lists are DIFFERENT.\n");

    return 0;
}
