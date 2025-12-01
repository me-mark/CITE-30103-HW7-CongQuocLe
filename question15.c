#include <stdio.h>

int main() {
    char line[101];
    int words = 0, i = 0;

    printf("Enter a line of text (up to 100 chars):\n");
    fgets(line, 101, stdin);

    // Count words separated by spaces
    while (line[i] != '\0') {
        // Start of a word: non-space AND either i==0 or previous char is space
        if (line[i] != ' ' && (i == 0 || line[i - 1] == ' '))
            words++;
        i++;
    }

    printf("Word count: %d\n", words);

    return 0;
}
