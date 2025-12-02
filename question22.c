#include <stdio.h>

int main() {
    int arr[5];

    printf("Enter 5 integers:\n");
    for (int i = 0; i < 5; i++) {
        scanf("%d", arr + i);   // pointer arithmetic for input
    }

    printf("You entered:\n");
    for (int i = 0; i < 5; i++) {
        printf("%d ", *(arr + i));   // pointer arithmetic for output
    }
    printf("\n");

    return 0;
}
