#include <stdio.h>

int main() {
    int amount;

    printf("Enter withdrawal amount: ");
    scanf("%d", &amount);

    if (amount % 100 == 0)
        printf("Valid withdrawal amount\n");
    else
        printf("Invalid amount (must be multiple of 100)\n");

    return 0;
}
