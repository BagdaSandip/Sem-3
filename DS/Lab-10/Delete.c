#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;
};

struct Node* First = NULL;
void insertAtBeginning(int value) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = value;
    newNode->next = First;
    First = newNode;
}
void deleteFirstNode() {
    if (First == NULL) {
        printf("List is already empty.\n");
        return;
    }
    struct Node* temp = First;
    First = First->next;
    free(temp);
    printf("First node deleted.\n");
}
void displayList() {
    struct Node* temp = First;
    while (temp != NULL) {
        printf("%d -> ", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");
}
int main() {
    insertAtBeginning(30);
    insertAtBeginning(20);
    insertAtBeginning(10);

    printf("Original list:\n");
    displayList();

    deleteFirstNode();

    printf("List after deleting first node:\n");
    displayList();

    return 0;
}
