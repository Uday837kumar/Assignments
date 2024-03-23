gcc#include <stdio.h>
#include <stdlib.h> 
#include<string.h>

typedef struct Item {
    int id;
    char name[50]; 
    int qoh;
    float rate;
    char code;
    struct Item *next;
} Item;


void insertInList(Item **head_ref, int id, char name[], int qoh, float rate, char code) {

    Item *current = *head_ref;
    while (current != NULL && current->code != code) {
        current = current->next;
    }

    if (current != NULL) {
        printf("Error: Item with code %c already exists.\n", code);
        return;  
    }


    Item *new_node = (Item *)malloc(sizeof(Item));
    if (new_node == NULL) {
        printf("Memory allocation failed!\n");
        return;  
    }
    new_node->id = id;
    strcpy(new_node->name, name);
    new_node->qoh = qoh;
    new_node->rate = rate;
    new_node->code = code;

    new_node->next = *head_ref;
    *head_ref = new_node;  
}

int main() {
    Item *head = NULL; 
    int id, qoh;
    float rate;
    char name[50], code;

    insertInList(&head, id, name, qoh, rate, code);



    return 0;
}