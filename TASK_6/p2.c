#include <stdio.h>
#include <string.h>

struct Employee {
    char name[50];
    float salary;
    int id;
    char job_title[50];
};

struct Employee initEmployee(char name[], float salary, int id, char job_title[]) {
    struct Employee e;
    strcpy(e.name, name);
    e.salary = salary;
    e.id = id;
    strcpy(e.job_title, job_title);
    return e;
}

void printEmployee(struct Employee e) {
    printf("Employee Info:\n");
    printf("Name: %s\n", e.name);
    printf("Salary: %.2f\n", e.salary);
    printf("ID: %d\n", e.id);
    printf("Job Title: %s\n", e.job_title);
}

int main() {
    struct Employee emp = initEmployee("Sarah Connor", 62000.75, 102, "Manager");
    printEmployee(emp);
    return 0;
}
