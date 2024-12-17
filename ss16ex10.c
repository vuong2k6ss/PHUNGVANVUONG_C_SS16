#include <stdio.h>

void deleteIndex(int *arr, int index);

int main() {
    int arr[] = {1, 3, 5, 7, 9};
    int n = sizeof(arr) / sizeof(arr[0]);
    int k;
    printf("nhap vi tri can xoa: ");
    scanf("%d", &k);
    if(k < 0 || k >= n){
        printf("vi tri khong hop le");
    }else{
        deleteIndex(arr, k);
        printf("mang sau khi xoa phan tu tai vi tri %d: ", k);
        for(int i = 0; i < n - 1; i++) {
            printf("%d ", arr[i]);
        }
    }
    return 0;
}

void deleteIndex(int *arr, int index) {
    for(int i = index; i < 4; i++){
        arr[i] = arr[i + 1];
    }
}

