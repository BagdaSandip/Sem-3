#include <stdio.h>
#include <stdlib.h>
struct Node {
    int data;
    struct Node* next;
};
struct Node* createNode(int data) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    if (!newNode) {
        printf("Memory error\n");
    }
    newNode->data = data;
    newNode->next = NULL;
    return newNode;
}
void append(struct Node** first, int data) {
    struct Node* newNode = createNode(data);
    if (*first == NULL) {
        *first = newNode;
    }
    struct Node* temp = *first;
    while (temp->next != NULL)
        temp = temp->next;
    temp->next = newNode;
}
void reverseList(struct Node** first) {
    struct Node* prev = NULL;
    struct Node* current = *first;
    struct Node* next = NULL;
    while (current != NULL) {
        next = current->next;
        current->next = prev;
        prev = current;
        current = next;
    }
    *first = prev;
}
int main() {
    struct Node* first = NULL;
    reverseList(&first);
    printf("Reversed List:\n");
    printList(first);
}
