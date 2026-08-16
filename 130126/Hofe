#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int freq[256] = {0};

    printf("Enter string: ");
    gets(str);

    for (int i = 0; str[i] != '\0'; i++) {
        freq[str[i]]++;
    }

    for (int i = 0; str[i] != '\0'; i++) {
        if (freq[str[i]] != 0) {
            printf("%c%d ", str[i], freq[str[i]]);
            freq[str[i]] = 0;   // to avoid repeat
        }
    }

    return 0;
}
