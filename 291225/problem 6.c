#include <stdio.h>
int main() {
    char A;
    scanf("%c",&A);
    if(A=='a'|| A=='e'||A=='i'||A=='o'||A=='u'){
        printf("it is vowel");
    }
    else{
        printf("it is not vowel");
    }
    return 0;
}