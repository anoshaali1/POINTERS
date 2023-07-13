#include <stdio.h>
#include <stdlib.h>

int* sum(int num1, int num2) {
    int* result = malloc(sizeof(int));
    *result = num1 + num2;
    return result;
}

int main() {
    int num1, num2;
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    int* sumPtr = sum(num1, num2);

    printf("The sum is: %d\n", *sumPtr);

    free(sumPtr); // Free the dynamically allocated memory

    return 0;
}
