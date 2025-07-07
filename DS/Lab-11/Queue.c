#include <stdio.h>
#include <stdlib.h>
struct Node {
    int data;
    struct Node* next;
};
struct Node* first = NULL;
struct Node* rear = NULL;
void enqueue(int value) { //insert elements at the end of the queue
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    if (!newNode) {
        printf("Memory allocation failed\n");
        return;
    }
    newNode->data = value;
    newNode->next = NULL;
    if (first == NULL) {
        first = rear = newNode;
    } else {
        rear->next = newNode;
        rear = newNode;
    }
    printf("%d enqueued to queue\n", value);
}
void dequeue() { //remove elements from front of the queue
    if (first == NULL) {
        printf("Queue is empty. Cannot dequeue.\n");
        return;
    }
    struct Node* temp = first;
    printf("%d dequeued from queue\n", first->data);
    first = first->next;
    if (first == NULL) {
        rear = NULL; 
    }
    free(temp);
}
void display() {
    if (first == NULL) {
        printf("Queue is empty.\n");
        return;
    }
    struct Node* temp = first;
    printf("Queue: ");
    while (temp != NULL) {
        printf("%d -> ", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");
}
void peek() {
    if (first == NULL) {
        printf("Queue is empty.\n");
    } else {
        printf("Front element is: %d\n", first->data);
    }
}
int isEmpty() {
    return first == NULL;
}
int main() {
    enqueue(10);
    enqueue(20);
    enqueue(30);
    display();
    peek();
    dequeue();
    display();
    dequeue();
    dequeue();
    dequeue(); 
    return 0;
}
