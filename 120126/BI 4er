#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    char word[50];
    char largest[50], smallest[50];
    int i = 0, j = 0, len;
    int min = 1000, max = 0;

    printf("Enter string: ");
    gets(str);

    for (i = 0; ; i++) {
        if (str[i] != ' ' && str[i] != '\0') {
            word[j++] = str[i];
        } else {
            word[j] = '\0';
            len = strlen(word);

            if (len > 0) {
                if (len > max) {
                    max = len;
                    strcpy(largest, word);
                }
                if (len < min) {
                    min = len;
                    strcpy(smallest, word);
                }
            }
            j = 0;
        }

        if (str[i] == '\0')
            break;
    }

    printf("Largest: %s\n", largest);
    printf("Smallest: %s\n", smallest);

    return 0;
}
