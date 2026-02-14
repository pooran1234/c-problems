#include <stdio.h>

int main() {
    int length;

    // input
    scanf("%d", &length);

    // check condition
    if (length >= 8)
        printf("Strong Password");
    else
        printf("Weak Password");

    return 0;
}
