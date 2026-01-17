#include <stdio.h>

int main() {
    char str[200];
    int i, count = 0;

    // Read sentence
    printf("Enter a sentence: ");
    fgets(str, sizeof(str), stdin);

    // Count words
    for (i = 0; str[i] != '\0'; i++) {
        if ((str[i] != ' ' && str[i] != '\n') &&
            (i == 0 || str[i - 1] == ' ')) {
            count++;
        }
    }

    // Display result
    printf("Number of words: %d", count);

    return 0;
}
