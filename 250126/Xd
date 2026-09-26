#include <stdio.h>

int main() {
    int num, temp, rev = 0, rem;

    printf("Enter a number: ");
    scanf("%d", &num);

    temp = num;

    // Reverse the number
    while(num != 0) {
        rem = num % 10;
        rev = rev * 10 + rem;
        num = num / 10;
    }

    // Check palindrome
    if(temp == rev)
        printf("Palindrome number");
    else
        printf("Not a palindrome number");

    return 0;
}
