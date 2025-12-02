#include <stdio.h>

int main() {
    int x = 25;     // regular variable
    int *ptr = &x;  // pointer to x

    printf("Value of x: %d\n", x);
    printf("Address of x: %p\n", (void*)ptr);
    printf("Dereferenced ptr value: %d\n", *ptr);

    return 0;
}
