#include <stdio.h>

int main() {
    int n, i, min;
    int arr[100];

    // Read number of elements
    scanf("%d", &n);

    // Read array elements
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Assume first element is minimum
    min = arr[0];

    // Find minimum
    for(i = 1; i < n; i++) {
        if(arr[i] < min) {
            min = arr[i];
        }
    }

    // Print result
    printf("%d", min);

    return 0;
}
