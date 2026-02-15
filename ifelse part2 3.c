#include <stdio.h>

int main() {
    int amount;

    // input
    scanf("%d", &amount);

    // condition
    if (amount >= 1000) {
        printf("Discount Applied");
    } else {
        printf("No Discount");
    }

    return 0;
}
