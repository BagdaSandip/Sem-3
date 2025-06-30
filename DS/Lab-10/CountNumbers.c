#include <stdio.h>
#include <stdlib.h>
struct Node {
    int data;
    struct Node* next;
};
int countNodes(struct Node* first) {
    int count = 0;
    struct Node* current = first;
    while (current != NULL) {
        count++;
        current = current->next;
    }
    return count;
}
struct Node* createNode(int data) {
    struct Node* newNode = (struct Node*) malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->next = NULL;
    return newNode;
}
int main() {

    struct Node* first = createNode(10);
    first->next = createNode(20);
    first->next->next = createNode(30);
    int totalNodes = countNodes(first);
    printf("Number of nodes = %d\n", totalNodes);
    return 0;
}
