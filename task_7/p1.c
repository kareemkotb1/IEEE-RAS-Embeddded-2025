#include <stdio.h>
#include <string.h>

struct student_info {
    unsigned int roll : 4;
    unsigned int age : 8;
    unsigned int marks : 3;
    char name[50];
    char address[100];
};

void print_students(struct student_info students[], int n) {
    for (int i = 0; i < n; i++) {
        printf("Student %d:\n", i + 1);
        printf("Roll: %u\n", students[i].roll);
        printf("Age: %u\n", students[i].age);
        printf("Marks: %u\n", students[i].marks);
        printf("Name: %s\n", students[i].name);
        printf("Address: %s\n", students[i].address);
        printf("\n");
    }
}

int main() {
    struct student_info students[5];

    for (int i = 0; i < 5; i++) {
        students[i].roll = i + 1;
        students[i].age = 18 + i;
        students[i].marks = i % 8;  // 3-bit max value = 7
        snprintf(students[i].name, sizeof(students[i].name), "Student%d", i + 1);
        snprintf(students[i].address, sizeof(students[i].address), "City%d", i + 1);
    }

    print_students(students, 5);

    printf("Size of struct student_info: %lu bytes\n", sizeof(struct student_info));

    return 0;
}
