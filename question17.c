#include <stdio.h>

struct Student {
    char name[40];
    int roll;
    float marks;
};

int main() {
    struct Student s[5];

    // Input
    for (int i = 0; i < 5; i++) {
        printf("Enter name for student %d: ", i + 1);
        scanf("%39s", s[i].name);   // name without spaces

        printf("Enter roll number: ");
        scanf("%d", &s[i].roll);

        printf("Enter marks: ");
        scanf("%f", &s[i].marks);

        printf("\n");
    }

    // Output
    printf("\n%-20s %-10s %-10s\n", "Name", "Roll", "Marks");
    printf("-------------------------------------------\n");
    for (int i = 0; i < 5; i++) {
        printf("%-20s %-10d %-10.2f\n", s[i].name, s[i].roll, s[i].marks);
    }

    return 0;
}
