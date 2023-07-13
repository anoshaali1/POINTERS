#include <stdio.h>

#define ROWS 3
#define COLS 4

void printArray(int *arr, int rows, int cols) {
    int i, j;
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            printf("%d ", *((arr + i * cols) + j));
        }
        printf("\n");
    }
}

int main() {
    int arr[ROWS][COLS] = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12}
    };

    printf("2D Array elements:\n");
    printArray((int *)arr, ROWS, COLS);

    return 0;
}

