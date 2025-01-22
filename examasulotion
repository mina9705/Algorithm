ex01: 

#include <stdio.h>
#include "list.h"
typedef struct Node {
int value;
struct Node* next;
} Node;
void insert(Node** head, int value, int k) {
    Node* newNode = createNode(value);
    if (k == 0) {
        setNext(newNode, *head);
        *head = newNode;
        return;
    }

    Node* current = *head;
    int currentIndex = 0;

    while (current != NULL && currentIndex < k - 1) {
        current = getNext(current);
        currentIndex++;
    }

    if (current == NULL && currentIndex < k - 1) {
        printf("Error: %d is out of bounds\n", k);
        deleteNode(newNode);
        return;
    }

    setNext(newNode, getNext(current));
    setNext(current, newNode);
    }

ex02:

#include <stdio.h>
#include "list.h"
typedef struct Node {
int value; 
struct Node* next; 
struct Node* prev; 
} Node;
void reverse(Node** head) {
    Node* current = *head; 
    Node* temp = NULL; 
    while (current != NULL) {
        temp = getNext(current); 
        setNext(current, getPrev(current)); 
        setPrev(current, temp); 
        current = getPrev(current);
    }
    if (temp != NULL) {
        *head = getPrev(temp); 
    }
}

ex03:
problem 02:

#include "stack.h"
#include "queue.h"
#include <stdio.h>
typedef struct Stack {
    Queue q; 
} Stack;
void initStack(Stack *stack) {
    initQueue(&stack->q);
}
void push(Stack *stack, int x) {
    enqueue(&stack->q, x); 
    int size = sizeQueue(&stack->q);
    for (int i = 0; i < size - 1; i++) {
        int temp = dequeue(&stack->q);
        enqueue(&stack->q, temp); 
    }
}
int pop(Stack *stack) {
    return dequeue(&stack->q); 
}
int peek(Stack *stack) {
    return front(&stack->q); 
}
int is_empty(Stack *stack) {
    return is_empty(&stack->q); 
}
typedef struct StackTwoQueues {
    Queue q1, q2;
} StackTwoQueues;
void initStackTwoQueues(StackTwoQueues *stack) {
    initQueue(&stack->q1);
    initQueue(&stack->q2);
}
void pushTwoQueues(StackTwoQueues *stack, int x) {
    enqueue(&stack->q2, x); 
    while (!is_empty(&stack->q1)) {
        enqueue(&stack->q2, dequeue(&stack->q1));
    }
    Queue temp = stack->q1;
    stack->q1 = stack->q2;
    stack->q2 = temp;
}
int popTwoQueues(StackTwoQueues *stack) {
    return dequeue(&stack->q1); 
}
int peekTwoQueues(StackTwoQueues *stack) {
    return front(&stack->q1); 
}
int emptyTwoQueues(StackTwoQueues *stack) {
    return is_empty(&stack->q1); 
}
