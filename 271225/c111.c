#include <stdio.h>

int main() {
    int choice;
    float a, b;

    printf("1. Add\n2. Subtract\n3. Multiply\n4. Divide\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    printf("Enter two numbers: ");
    scanf("%f %f", &a, &b);

    switch(choice) {
        case 1: printf("Sum = %.2f", a + b);
                break;
        case 2: printf("Difference = %.2f", a - b);
                break;
        case 3: printf("Product = %.2f", a * b);
                break;
        case 4:
            if(b != 0)
                printf("Division = %.2f", a / b);
            else
                printf("Division not possible");
            break;
        default: printf("Invalid choice");
    }
    return 0;
}
