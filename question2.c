#include <stdio.h>

int max3(int a, int b, int c) {
    int max = a;

    if (b > max)
        max = b;

    if (c > max)
        max = c;

    return max;
}

int main() {
    int a, b, c;

    printf("Enter three integers: ");
    scanf("%d %d %d", &a, &b, &c);

    int result = max3(a, b, c);

    printf("The largest number is: %d\n", result);

    return 0;
}
