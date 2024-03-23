#include <stdio.h>
#include <stdlib.h>
#include<string.h>


typedef struct Node {
    int id;
    char name[50];
    int qoh;
    float rate;
    struct Node *next;
} Node;

Node *head = NULL; // Assuming a global head pointer

void insertInList(int id, char *name, int qoh, float rate, int code) {
    Node *current = head;
    Node *prev = NULL;

    // Find the node with item id = code
    while (current != NULL && current->id != code) {
        prev = current;
        current = current->next;
    }

    if (current == NULL) { // Not found
        return;
    }

    // Allocate memory for the new node
    Node *newNode = (Node *)malloc(sizeof(Node));

    // Initialize the new node's data
    newNode->id = id;
    strcpy(newNode->name, name);
    newNode->qoh = qoh;
    newNode->rate = rate;
    newNode->next = current->next;

    // Link the new node to the found node
    current->next = newNode;

    // Update the previous node's pointer if necessary
    if (prev != NULL) {
        prev->next = newNode;
    } else {
        head = newNode; // If inserting at the beginning
    }
}