#include <stdio.h>

typedef enum {
    SATURDAY,
    SUNDAY,
    MONDAY,
    TUESDAY,
    WEDNESDAY,
    THURSDAY,
    FRIDAY
} Day;

const char* getDayType(Day d) {
    if (d == SATURDAY || d == FRIDAY)
        return "Weekend";
    else
        return "Weekday";
}

int main() {
    Day today;

    printf("Enter day number (0 for Saturday to 6 for Friday): ");
    int input;
    scanf("%d", &input);

    if (input < 0 || input > 6) {
        printf("Invalid day number.\n");
        return 1;
    }

    today = (Day)input;

    printf("It's a %s.\n", getDayType(today));

    return 0;
}
