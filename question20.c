#include <stdio.h>

struct Student {
    char name[40];
    int roll;
    float marks;
};

void printStudent(struct Student s) {
    printf("\n--- Student Information ---\n");
    printf("Name : %s\n", s.name);
    printf("Roll : %d\n", s.roll);
    printf("Marks: %.2f\n", s.marks);
}

int main() {
    struct Student s;

    printf("Enter name: ");
    scanf("%39s", s.name);

    printf("Enter roll: ");
    scanf("%d", &s.roll);

    printf("Enter marks: ");
    scanf("%f", &s.marks);

    printStudent(s);   // function call

    return 0;
}
