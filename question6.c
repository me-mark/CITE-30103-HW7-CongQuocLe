#include <stdio.h>

int main() {
    int n, arr[100];
    int sum = 0;
    float avg;

    printf("How many integers (max 100)? ");
    scanf("%d", &n);

    if (n < 1 || n > 100) {
        printf("Invalid number of elements.\n");
        return 1;
    }

    printf("Enter %d integers:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        sum += arr[i];
    }

    avg = (float)sum / n;

    printf("Sum = %d\n", sum);
    printf("Average = %.2f\n", avg);

    return 0;
}
