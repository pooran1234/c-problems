#include <stdio.h>
#include <ctype.h>

int main() {
    char name[100];
    int i;

    // Input name
    printf("Enter name: ");
    scanf("%s", name);

    // Convert first character to uppercase
    name[0] = toupper(name[0]);

    // Convert remaining characters to lowercase
    for (i = 1; name[i] != '\0'; i++) {
        name[i] = tolower(name[i]);
    }

    // Output formatted name
    printf("%s", name);

    return 0;
}
