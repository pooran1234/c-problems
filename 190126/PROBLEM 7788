#include <stdio.h>
#include <string.h>

int main() {
    char msg[200];
    int i;

    // Input string
    fgets(msg, sizeof(msg), stdin);

    // Remove newline character if present
    msg[strcspn(msg, "\n")] = '\0';

    // Reverse and print
    for (i = strlen(msg) - 1; i >= 0; i--) {
        printf("%c", msg[i]);
    }

    return 0;
}
