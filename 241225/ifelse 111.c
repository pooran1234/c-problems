#include <stdio.h>

int main() {
    int roll;
    float m1, m2, m3, total, percentage;

    printf("Enter Roll Number: ");
    scanf("%d", &roll);

    printf("Enter marks of 3 subjects:\n");
    scanf("%f %f %f", &m1, &m2, &m3);

    total = m1 + m2 + m3;
    percentage = total / 3;

    printf("\nRoll Number: %d", roll);
    printf("\nTotal Marks: %.2f", total);
    printf("\nPercentage: %.2f%%", percentage);

    if (percentage >= 75) {
        printf("\nGrade: A");
    } else if (percentage >= 60) {
        printf("\nGrade: B");
    } else if (percentage >= 45) {
        printf("\nGrade: C");
    } else {
        printf("\nGrade: Fail");
    }

    return 0;
}
