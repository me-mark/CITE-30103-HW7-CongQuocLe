#include <stdio.h>

long factorial(int n) {
    if (n < 0) {
        printf("Error: factorial of a negative number is undefined.\n");
        return -1;   // return an invalid value
    }
    if (n == 0 || n == 1)
        return 1;

    return n * factorial(n - 1);
}

int main() {
    int n;
    long result;

    printf("Enter an integer: ");
    scanf("%d", &n);

    result = factorial(n);

    if (result != -1)   // only print if valid
        printf("%d! = %ld\n", n, result);

    return 0;
}
