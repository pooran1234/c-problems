#include <stdio.h>
#include <string.h>

int main() {
    char str[100], word[50], longest[50];
    int i = 0, j = 0, maxLen = 0;

    printf("Enter a sentence: ");
    gets(str);

    for (i = 0; i <= strlen(str); i++) {
        if (str[i] != ' ' && str[i] != '\0') {
            word[j++] = str[i];
        } else {
            word[j] = '\0';
            if (j > maxLen) {
                maxLen = j;
                strcpy(longest, word);
            }
            j = 0;
        }
    }

    printf("Longest word: %s", longest);
    return 0;
}
