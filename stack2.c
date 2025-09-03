#include <stdio.h>
#include <stdlib.h>

struct stack {
    int element;
    struct stack* next;
}*top = NULL;

void push(int);
int pop();
void display();

int main() {
    int num1, num2, choice;

    while (1) {
        

        printf("Select a choice from the following:\n");
        printf("[1] Push an element into the stack\n");
        printf("[2] Pop out an element from the stack\n");
        printf("[3] Display the stack elements\n");
        printf("[4] Exit\n");
        printf("\nYour choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1: {
                printf("\nEnter the element to be pushed into the stack: ");
                scanf("%d", &num1);
                push(num1);
                break;
            }
            case 2: {
                num2 = pop();
                if (num2 != -1) {
                    printf("\n%d element popped out of the stack\n", num2);
                }
                break;
            }
            case 3: {
                display();
                break;
            }
            case 4:
                exit(0);
            default:
                printf("\nInvalid choice!\n");
                break;
        }
    }

    return 0;
}

void push(int value) {
    struct stack* ptr = (struct stack*)malloc(sizeof(struct stack));
    if (ptr == NULL) {
        printf("\nMemory allocation failed. Stack is full.\n");
        return;
    }
    ptr->element = value;
    ptr->next = top;
    top = ptr;
}

int pop() {
    if (top == NULL) {
        printf("\nSTACK is Empty.\n");
        return -1; // Return a sentinel value to indicate failure
    }
    struct stack* temp = top;
    int poppedValue = temp->element;
    top = top->next;
    free(temp);
    return poppedValue;
}

void display() {
    struct stack* ptr1 = top;
    if (ptr1 == NULL) {
        printf("\nSTACK is Empty.\n");
        return;
    }
    printf("\nThe various stack elements are:\n");
    while (ptr1 != NULL) {
        printf("%d\t\n", ptr1->element);
        ptr1 = ptr1->next;
    }
}
