#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int i, j;
    int duplicate = 0;

    printf("Enter a string: ");
    gets(str);   // for simplicity (often used in exams)

    for (i = 0; str[i] != '\0'; i++) {
        for (j = i + 1; str[j] != '\0'; j++) {
            if (str[i] == str[j]) {
                duplicate = 1;
                break;
            }
        }
        if (duplicate == 1)
            break;
    }

    if (duplicate == 1)
        printf("Duplicates found");
    else
        printf("No duplicates");

    return 0;
}
