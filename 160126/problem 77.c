#include <stdio.h>
#include <string.h>

int main() {
    char email[100];
    char domain[] = "@company.com";
    int emailLen, domainLen;

    printf("Enter email address: ");
    scanf("%s", email);

    emailLen = strlen(email);
    domainLen = strlen(domain);

    if (emailLen >= domainLen &&
        strcmp(email + emailLen - domainLen, domain) == 0) {
        printf("Valid\n");
    } else {
        printf("Invalid\n");
    }

    return 0;
}
