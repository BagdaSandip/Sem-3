#include <stdio.h>
#include <stdlib.h>
struct Node {
    int data;
    struct Node* next;
};

struct Node* first = NULL;

void push(int value) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    if (newNode == NULL) {
        printf("Memory allocation failed. Stack Overflow.\n");
        return;
    }
    newNode->data = value;
    newNode->next = first;
    first = newNode;
    printf("Pushed %d onto the stack\n", value);
}
void pop() {
    if (first == NULL) {
        printf("Stack Underflow. Nothing to pop.\n");
        return;
    }
    struct Node* temp = first;
    printf("Popped %d from the stack\n", temp->data);
    first = first->next;
    free(temp);
}
void display(){
    if (first == NULL) {
        printf("Stack is empty\n");
    }
    struct Node* temp = first;
    printf("Stack contents: ");
    while (temp != NULL) {
        printf("%d ", temp->data);
        temp = temp->next;
    }
    printf("\n");
}
int main() {
    push(10);
    push(20);
    push(30);
    display();
    pop();
    display();
    pop();
    display();
    pop();
    display();
    pop(); 

}
