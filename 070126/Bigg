#include <stdio.h>

int main() {
    int size;
    scanf("%d", &size);

    int arr[size];

    for(int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    // Sort descending
    for(int i = 0; i < size; i++) {
        for(int j = i + 1; j < size; j++) {
            if(arr[i] < arr[j]) {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }

    printf("%d", arr[1]);   // second largest

    return 0;
}
