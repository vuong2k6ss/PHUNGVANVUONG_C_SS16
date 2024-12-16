#include <stdio.h>

void sapXep(int *arr, int size){
    int i, j, temp;
    for (i = 0; i < size - 1; i++){
        for (j = i + 1; j < size; j++){
            if (arr[i] > arr[j]){
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }

    printf("mang sau khi sap xep: ");
    for (i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int arr[] = {14, 10, 6, 3, 17, 30};
    int size = sizeof(arr) / sizeof(arr[0]);
    sapXep(arr, size);
    return 0;
}

