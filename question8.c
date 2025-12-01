#include <stdio.h>

int main() {
    int n, arr[100];
    int even = 0, odd = 0;

    printf("How many integers (max 100)? ");
    scanf("%d", &n);

    printf("Enter %d integers:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);

        if (arr[i] % 2 == 0)
            even++;
        else
            odd++;
    }

    printf("Even count = %d\n", even);
    printf("Odd count = %d\n", odd);

    return 0;
}
