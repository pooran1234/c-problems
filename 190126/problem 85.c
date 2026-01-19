#include <stdio.h>
#include <string.h>

int main() {
    char log[200];

    // Input log message
    fgets(log, sizeof(log), stdin);

    // Check for the word "error"
    if (strstr(log, "error") != NULL) {
        printf("Found");
    } else {
        printf("Not Found");
    }

    return 0;
}
