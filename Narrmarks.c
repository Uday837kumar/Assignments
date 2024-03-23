#include <stdio.h>

int main() {
    int nArrMarks[5] = {90, 85, 78, 95, 82}; 
    int baseAddress = (int)&nArrMarks[0];  

    
    for (int i = 0; i < 5; i++) {
        int elementAddress = baseAddress + i * sizeof(int);
        printf("Address of element %d (nArrMarks[%d]): %p\n", i + 1, i, elementAddress);
    }

    return 0;
}