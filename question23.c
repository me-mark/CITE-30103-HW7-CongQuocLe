#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;
    int *arr;
    int sum = 0;
    float average;

    printf("How many integers? ");
    scanf("%d", &n);

    arr = (int*) malloc(n * sizeof(int));   // allocate memory
    if (arr == NULL) {
        printf("Memory allocation failed.\n");
        return 1;
    }

    printf("Enter %d integers:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        sum += arr[i];
    }

    average = (float)sum / n;
    printf("Average = %.2f\n", average);

    free(arr);   // free allocated memory
    return 0;
}
