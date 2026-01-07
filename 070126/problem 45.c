#include <stdio.h>

int main() {
    int size;
    scanf("%d", &size);

    int arr[size];
    int sum = 0;

    for(int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
        sum = sum + arr[i];
    }

    float avg = (float)sum / size;
    printf("%.2f", avg);

    return 0;
}
