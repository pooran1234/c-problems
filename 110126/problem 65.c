#include <stdio.h>
int main() {
    int n, bin = 0, base = 1, r;
    scanf("%d", &n);

    while (n > 0) {
        r = n % 2;
        bin += r * base;
        base *= 10;
        n /= 2;
    }

    printf("%d", bin);
    return 0;
}
