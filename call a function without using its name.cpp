#include <stdio.h>

void hello() {
    printf("Hello, world!\n");
}

int main() {
    void (*funcPtr)();  // Define a function pointer

    funcPtr = hello;    // Assign the address of hello() function to the pointer

    // Call the function using the pointer
    (*funcPtr)();       // Alternative syntax: funcPtr();

    return 0;
}


