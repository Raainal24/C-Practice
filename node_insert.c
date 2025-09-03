#include <stdio.h>
#include <stdlib.h>

// Define the node structure
struct node {
    int data;
    struct node* next;
};

// Initialize the head of the linked list
struct node* head = NULL;

// Function to insert a node at the beginning
void beginsert(int item) {
    struct node* ptr = (struct node*)malloc(sizeof(struct node));
    if (ptr == NULL) {
        printf("\nOVERFLOW\n");
    } else {
        ptr->data = item;
        ptr->next = head;
        head = ptr;
        printf("\nNode inserted\n");
    }
}

int main() {
    int choice, item;
    do {
        printf("\nEnter the item which you want to insert?\n");
        scanf("%d", &item);
        beginsert(item);
        printf("\nPress 0 to insert more or press any number to exit?\n");
        scanf("%d", &choice);
    } while (choice == 0);

    // Display the linked list
    struct node* current = head;
    printf("\nLinked List: ");
    while (current != NULL) {
        printf("%d -> ", current->data);
        current = current->next;
    }
    printf("NULL\n");

    // Free memory allocated for the linked list
    while (head != NULL) {
        struct node* temp = head;
        head = head->next;
        free(temp);
    }

    return 0;
}
