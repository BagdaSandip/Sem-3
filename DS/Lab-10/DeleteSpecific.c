#include <stdio.h>
#include <stdlib.h>
struct Node {
    int data;
    struct Node* next;
};
void append(struct Node** first_ref, int data) {
    struct Node* new_node = (struct Node*)malloc(sizeof(struct Node));
    struct Node* last = *first_ref;
    new_node->data = data;
    new_node->next = NULL;
    if (*first_ref == NULL) {
        *first_ref = new_node;
        return;
    }
    while (last->next != NULL)
        last = last->next;
    last->next = new_node;
}
void deleteAtPosition(struct Node** first_ref, int position) {
    if (*first_ref == NULL) {
        printf("List is empty.\n");
        return;
    }
    struct Node* temp = *first_ref;
    if (position == 0) {
        *first_ref = temp->next;
        free(temp);
        return;
    }
    for (int i = 0; temp != NULL && i < position - 1; i++)
        temp = temp->next;
    if (temp == NULL || temp->next == NULL) {
        printf("Position out of bounds.\n");
        return;
    }
    struct Node* node_to_delete = temp->next;
    temp->next = node_to_delete->next;
    free(node_to_delete);
}
void printList(struct Node* node) {
    while (node != NULL) {
        printf("%d -> ", node->data);
        node = node->next;
    }
    printf("NULL\n");
}

int main() {
    struct Node* first = NULL;
    append(&first, 10);
    append(&first, 20);
    append(&first, 30);
    append(&first, 40);
    printf("Original List:\n");
    printList(first);
    deleteAtPosition(&first, 2);
    printf("After deleting node at position 2:\n");
    printList(first);
    return 0;
}
