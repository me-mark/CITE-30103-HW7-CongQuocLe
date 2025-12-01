#include <stdio.h>

int main() {
    char line[101];
    int vowels = 0, consonants = 0, digits = 0;
    char c;

    printf("Enter a line of text (up to 100 chars):\n");
    fgets(line, 101, stdin);

    for (int i = 0; line[i] != '\0'; i++) {
        c = line[i];

        if (c >= '0' && c <= '9') {
            digits++;
        }
        else if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z')) {
            // Letter → check vowel vs consonant
            if (c=='A'||c=='E'||c=='I'||c=='O'||c=='U'||
                c=='a'||c=='e'||c=='i'||c=='o'||c=='u')
                vowels++;
            else
                consonants++;
        }
    }

    printf("Vowels: %d\n", vowels);
    printf("Consonants: %d\n", consonants);
    printf("Digits: %d\n", digits);

    return 0;
}
