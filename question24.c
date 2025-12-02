#include <stdio.h>

int square(int x) {
    return x * x;
}

int main() {
    int (*fp)(int);   // function pointer declaration
    fp = square;      // assign function to pointer

    int n;
    printf("Enter an integer: ");
    scanf("%d", &n);

    int result = fp(n);   // call through function pointer

    printf("Square = %d\n", result);

    return 0;
}
