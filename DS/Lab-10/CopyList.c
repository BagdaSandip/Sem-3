#include <stdio.h>
#include <stdlib.h>
struct Node {
    int data;
    struct Node* next;
};
struct Node* createNode(int data) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    if (newNode == NULL) {
        printf("Memory allocation failed.\n");
    }
    newNode->data = data;
    newNode->next = NULL;
    return newNode;
}
void insertEnd(struct Node** first, int data) {
    struct Node* newNode = createNode(data);
    if (*first == NULL) {
        *first = newNode;
    }
    struct Node* temp = *first;
    while (temp->next != NULL)
        temp = temp->next;
    temp->next = newNode;
}
struct Node* copyList(struct Node* first) {
    if (first == NULL)
        return NULL;
    struct Node* newFirst = NULL;
    struct Node* tail = NULL;
    while (first != NULL) {
        struct Node* newNode = createNode(first->data);
        if (newFirst == NULL) {
            newFirst = newNode;
            tail = newFirst;
        } else {
            tail->next = newNode;
            tail = tail->next;
        }
        first = first->next;
    }
    return newFirst;
}
void printList(struct Node* first) {
    while (first != NULL) {
        printf("%d -> ", first->data);
        first = first->next;
    }
    printf("NULL\n");
}

int main() {
    struct Node* first = NULL;
    insertEnd(&first, 10);
    insertEnd(&first, 20);
    insertEnd(&first, 30);
    insertEnd(&first, 40);
    printf("Original List:\n");
    printList(first);
    struct Node* copiedFirst = copyList(first);
    printf("Copied List:\n");
    printList(copiedFirst);
}
