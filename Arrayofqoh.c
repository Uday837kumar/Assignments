#include <stdio.h>

int main() {
    int qoh[5][3] = {{10, 12, 5}, {12, 10, 3}, {5, 6, 8}, {10, 12, 15}, {2, 5, 8}};
    int num_stores = 5;
    int num_items = 3;
    int item_totals[num_items]; 

   
    for (int i = 0; i < num_items; i++) {
        item_totals[i] = 0;
        for (int j = 0; j < num_stores; j++) {
            item_totals[i] += qoh[j][i];
        }
    }


    printf("Total QOH for each item:\n");
    for (int i = 0; i < num_items; i++) {
        printf("Item %d: %d\n", i + 1, item_totals[i]);
    }

    return 0;
}