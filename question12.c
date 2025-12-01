#include <stdio.h>

int main() {
    char str[100];
    int i = 0, j, isPal = 1;

    printf("Enter a word (no spaces): ");
    scanf("%s", str);

    // Find length manually
    while (str[i] != '\0') {
        i++;
    }
    j = i - 1;          // j points to last character
    i = 0;              // i points to first character

    // Check palindrome
    while (i < j) {
        if (str[i] != str[j]) {
            isPal = 0;
            break;
        }
        i++;
        j--;
    }

    if (isPal)
        printf("Palindrome\n");
    else
        printf("Not Palindrome\n");

    return 0;
}
