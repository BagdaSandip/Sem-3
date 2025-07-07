#include <stdio.h>
#include <stdlib.h>
struct Node {
    int data;
    struct Node* next;
};
struct Node* createNode(int data) {
    struct Node* newNode = (struct Node*) malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->next = NULL;
    return newNode;
}
void removeDuplicates(struct Node* first) {
    struct Node* current = first;

    while (current != NULL && current->next != NULL) {
        if (current->data == current->next->data) {
            struct Node* temp = current->next;
            current->next = current->next->next;
            free(temp);
        } else {
       
            current = current->next;
        }
    }
}
void printList(struct Node* first) {
    struct Node* temp = first;
    while (temp != NULL) {
        printf("%d", temp->data);
        if (temp->next != NULL)
        temp = temp->next;
    }
    printf("\n");
}
int main() {
    struct Node* first = createNode(1);
    first->next = createNode(1);
    first->next->next = createNode(6);
    first->next->next->next = createNode(13);
    first->next->next->next->next = createNode(13);
    first->next->next->next->next->next = createNode(13);
    first->next->next->next->next->next->next = createNode(27);
    first->next->next->next->next->next->next->next = createNode(27);
    printf("Original List: ");
    printList(first);
    removeDuplicates(first);
    printf("List after removing duplicates: ");
    printList(first);
}
