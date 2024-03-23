#include <stdio.h>

int main() 

{

int qoh[5][3] = { {10, 12, 5}, {12, 10, 3}, {5, 6, 8}, {10, 12, 15}, {2, 5, 8} };


printf("The QOH for the 2nd Item in the 3rd Store is %d\n", qoh[2][1]);

printf("The QOH for the 3rd Item in the 2nd Store is %d\n", qoh[1][2]);

printf("The QOH for the 1st Item in the 4th Store is %d\n", qoh[3][0]);

}