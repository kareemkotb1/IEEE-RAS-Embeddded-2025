#include <stdio.h>

struct Animal {
    char name[50];
    int age;
    char kind[50];
    char food[50];
    char owner[50];
};

struct Employee {
    char name[50];
    float salary;
    int id;
    char job_title[50];
};

int main() {
    struct Animal dog = {"Buddy", 5, "Golden Retriever", "Dog Food", "Alice"};
    struct Animal cat = {"Whiskers", 3, "Persian", "Cat Food", "Bob"};
    
    printf("Dog Info:\n");
    printf("Name: %s\n", dog.name);
    printf("Age: %d\n", dog.age);
    printf("Kind: %s\n", dog.kind);
    printf("Food: %s\n", dog.food);
    printf("Owner: %s\n", dog.owner);

    printf("\nCat Info:\n");
    printf("Name: %s\n", cat.name);
    printf("Age: %d\n", cat.age);
    printf("Kind: %s\n", cat.kind);
    printf("Food: %s\n", cat.food);
    printf("Owner: %s\n", cat.owner);

    struct Employee emp = {"John Doe", 55000.50, 101, "Software Engineer"};

    printf("\nEmployee Info:\n");
    printf("Name: %s\n", emp.name);
    printf("Salary: %.2f\n", emp.salary);
    printf("ID: %d\n", emp.id);
    printf("Job Title: %s\n", emp.job_title);

    return 0;
}
