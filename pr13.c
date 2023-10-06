/*C program to check whether a given date is valid or
not (switch).*/


#include <stdio.h>

int isLeapyear(int y) {
    return (y % 4 == 0 && y % 100 != 0) || (y % 400 == 0);
}

int isValidDate(int d, int m, int y) {
    if (y < 1 || m < 1 || m > 12 || d < 1)
    {
        return 0;
    }
    switch (m) {
        case 2: // February
            if (isLeapyear(y)) {
                return (d <= 29);
            } else {
                return (d <= 28);
            }
        case 4: case 6: case 9: case 11: // April, June, September, November
            return (d <= 30);
        default: //  month with 31 days
            return (d <= 31);
    }
}

int main() {
    int d, m, y;

    printf("Enter a date (DD MM YYYY): ");
    scanf("%d/%d/%d", &d, &m, &y);

    if (isValidDate(d, m, y)) {
        printf("The date is valid.\n");
    } else {
        printf("The date is not valid.\n");
    }

    return 0;
}