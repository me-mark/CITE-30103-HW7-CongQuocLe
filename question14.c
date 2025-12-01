#include <stdio.h>

int main() {
    char s1[200], s2[100];
    int i = 0, j = 0;

    printf("Enter first string (no spaces): ");
    scanf("%s", s1);

    printf("Enter second string (no spaces): ");
    scanf("%s", s2);

    // Move i to the end of s1
    while (s1[i] != '\0') {
        i++;
    }

    // Append s2 to s1
    while (s2[j] != '\0') {
        s1[i] = s2[j];
        i++;
        j++;
    }
    s1[i] = '\0'; // end the new string

    printf("Concatenated string: %s\n", s1);

    return 0;
}
