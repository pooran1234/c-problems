#include <stdio.h>
#include <string.h>

int main() {
    char file[50];
    int len;

    printf("Enter file name: ");
    scanf("%s", file);

    len = strlen(file);

    if (len >= 4 && strcmp(file + len - 4, ".txt") == 0) {
        printf("Yes");
    } else {
        printf("No");
    }

    return 0;
}
