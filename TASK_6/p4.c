#include <stdio.h>
#include <string.h>

struct Animal {
    char name[50];
    int age;
    char kind[50];
    char food[50];
    char owner[50];
};

struct Animal initAnimal(char name[], int age, char kind[], char food[], char owner[]) {
    struct Animal a;
    strcpy(a.name, name);
    a.age = age;
    strcpy(a.kind, kind);
    strcpy(a.food, food);
    strcpy(a.owner, owner);
    return a;
}

void printAnimal(struct Animal a) {
    printf("Name: %s\n", a.name);
    printf("Age: %d\n", a.age);
    printf("Kind: %s\n", a.kind);
    printf("Food: %s\n", a.food);
    printf("Owner: %s\n", a.owner);
}

int main() {
    struct Animal dog = initAnimal("Max", 4, "Labrador", "Kibble", "Sarah");
    struct Animal cat = initAnimal("Luna", 2, "Siamese", "Wet Food", "David");

    printf("Dog Info:\n");
    printAnimal(dog);

    printf("\nCat Info:\n");
    printAnimal(cat);

    return 0;
}
