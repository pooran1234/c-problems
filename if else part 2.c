#include <stdio.h>

int main() {
    int salary;

    // input lo
    scanf("%d", &salary);

    // condition check
    if (salary > 30000) {
        printf("Bonus Eligible");
    } else {
        printf("Not Eligible");
    }

    return 0;
}
