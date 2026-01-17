#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char otp[20];
    int i, valid = 1;

    // Input OTP
    printf("Enter OTP: ");
    scanf("%s", otp);

    // Check length
    if (strlen(otp) != 6) {
        valid = 0;
    } else {
        // Check if all characters are digits
        for (i = 0; otp[i] != '\0'; i++) {
            if (!isdigit(otp[i])) {
                valid = 0;
                break;
            }
        }
    }

    // Output result
    if (valid)
        printf("Valid");
    else
        printf("Invalid");

    return 0;
}
