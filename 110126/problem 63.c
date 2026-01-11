#include <stdio.h>
int main() {
    int a, b;
    scanf("%d %d", &a, &b);

    for (int i = a; i <= b; i++) {
        int prime = 1;
        if (i < 2) prime = 0;

        for (int j = 2; j <= i / 2; j++) {
            if (i % j == 0) {
                prime = 0;
                break;
            }
        }
        if (prime)
            printf("%d ", i);
    }
    return 0;
}
