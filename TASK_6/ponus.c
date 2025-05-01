#include <stdio.h>
#include <stdlib.h>
#include <string.h>

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
    char jobTitle[50];
};

struct Animal* makeAnimal(char name[], int age, char kind[], char food[], char owner[]) {
    struct Animal* newAnimal = (struct Animal*)malloc(sizeof(struct Animal));
    if (newAnimal != NULL) {
        strcpy(newAnimal->name, name);
        newAnimal->age = age;
        strcpy(newAnimal->kind, kind);
        strcpy(newAnimal->food, food);
        strcpy(newAnimal->owner, owner);
    }
    return newAnimal;
}

struct Employee* makeEmployee(char name[], float salary, int id, char jobTitle[]) {
    struct Employee* newEmployee = (struct Employee*)malloc(sizeof(struct Employee));
    if (newEmployee != NULL) {
        strcpy(newEmployee->name, name);
        newEmployee->salary = salary;
        newEmployee->id = id;
        strcpy(newEmployee->jobTitle, jobTitle);
    }
    return newEmployee;
}

void deleteAnimal(struct Animal* animalPointer) {
    free(animalPointer);
}

void deleteEmployee(struct Employee* employeePointer) {
    free(employeePointer);
}

int main() {
    struct Animal* myDog = makeAnimal("Rocky", 6, "Bulldog", "Meat", "Daniel");
    struct Employee* myEmployee = makeEmployee("Emma", 72000.00, 203, "Designer");

    printf("Dog Name: %s\n", myDog->name);
    printf("Dog Owner: %s\n", myDog->owner);
    printf("Employee Name: %s\n", myEmployee->name);
    printf("Employee Job: %s\n", myEmployee->jobTitle);

    deleteAnimal(myDog);
    deleteEmployee(myEmployee);

    return 0;
}
