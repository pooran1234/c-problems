#include <stdio.h>

int main() {
    int temp;

    printf("Enter temperature: ");
    scanf("%d", &temp);

    if (temp < 20) {
        printf("Cold");
    }
    else if (temp <= 30) {
        printf("Normal");
    }
    else {
        printf("Hot");
    }

    return 0;
}
