#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char username[50];
    int i, valid = 1;
    int len;

    printf("Enter username: ");
    scanf("%s", username);

    len = strlen(username);

    /* Check length */
    if (len < 6 || len > 12) {
        valid = 0;
    }

    /* Check first character is not a digit */
    if (isdigit(username[0])) {
        valid = 0;
    }

    /* Check only lowercase letters and digits */
    for (i = 0; i < len; i++) {
        if (!(islower(username[i]) || isdigit(username[i]))) {
            valid = 0;
            break;
        }
    }

    if (valid)
        printf("Valid Username\n");
    else
        printf("Invalid Username\n");

    return 0;
}
