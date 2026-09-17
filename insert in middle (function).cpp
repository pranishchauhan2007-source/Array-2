#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node *next;
};

// Insert at first
void insertFirst(struct Node **head, int data) {
    struct Node *newNode = malloc(sizeof(struct Node));

    newNode->data = data;
    newNode->next = *head;
    *head = newNode;
}

// Insert at last
void insertLast(struct Node **head, int data) {
    struct Node *newNode = malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->next = NULL;

    if (*head == NULL) {
        *head = newNode;
        return;
    }

    struct Node *temp = *head;

    while (temp->next != NULL) {
        temp = temp->next;
    }

    temp->next = newNode;
}

// Insert at middle / given position
void insertMiddle(struct Node **head, int data, int position) {
    struct Node *newNode = malloc(sizeof(struct Node));
    newNode->data = data;

    if (position == 1) {
        newNode->next = *head;
        *head = newNode;
        return;
    }

    struct Node *temp = *head;

    // Move to the node before the required position
    for (int i = 1; i < position - 1 && temp != NULL; i++) {
        temp = temp->next;
    }

    if (temp == NULL) {
        printf("Invalid position\n");
        free(newNode);
        return;
    }

    newNode->next = temp->next;
    temp->next = newNode;
}

// Display linked list
void display(struct Node *head) {
    struct Node *temp = head;

    while (temp != NULL) {
        printf("%d -> ", temp->data);
        temp = temp->next;
    }

    printf("NULL\n");
}

int main() {
    struct Node *head = NULL;

    insertFirst(&head, 20);
    insertFirst(&head, 10);

    insertLast(&head, 40);
    insertLast(&head, 50);

    // Insert 30 at position 3
    insertMiddle(&head, 30, 3);

    display(head);

    return 0;
}