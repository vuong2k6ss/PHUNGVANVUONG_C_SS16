#include <stdio.h>

int timPhanTu(int *arr, int giaTri) {
    int i = 0;
    while (arr[i] != 0) {
        if (arr[i] == giaTri) {
            return i;
        }
        i++;
    }
    return -1;
}
int main() {
    int arr[] = {4, 9, 7, 20, 15, 0};
    int giaTriCanTim = 7;
    int viTri = timPhanTu(arr, giaTriCanTim);
    if (viTri != -1) {
        printf("phan tu %d duoc tim thay o vi tri %d", giaTriCanTim, viTri);
    } else {
        printf("phan tu %d khong duoc tim thay", giaTriCanTim);
    }

    return 0;
}

