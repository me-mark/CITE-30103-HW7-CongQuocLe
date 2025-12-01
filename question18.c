#include <stdio.h>

struct Student {
    char name[40];
    int roll;
    float marks;
};

int main() {
    struct Student s[5];
    int topIndex = 0;

    // Read 5 student records
    for (int i = 0; i < 5; i++) {
        printf("Enter name for student %d: ", i + 1);
        scanf("%39s", s[i].name);

        printf("Enter roll number: ");
        scanf("%d", &s[i].roll);

        printf("Enter marks: ");
        scanf("%f", &s[i].marks);

        printf("\n");
    }

    // Find highest marks
    for (int i = 1; i < 5; i++) {
        if (s[i].marks > s[topIndex].marks)
            topIndex = i;
    }

    // Print result
    printf("\n--- Student with Highest Marks ---\n");
    printf("Name : %s\n", s[topIndex].name);
    printf("Roll : %d\n", s[topIndex].roll);
    printf("Marks: %.2f\n", s[topIndex].marks);

    return 0;
}
