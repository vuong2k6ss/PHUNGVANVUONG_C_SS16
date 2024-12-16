#include <stdio.h>

void daoNguocChuoi(char *inputString, char *reverseString) {
    int length = strlen(inputString);
    for (int i = 0; i < length; i++) {
        reverseString[i] = inputString[length - 1 - i];
    }
    reverseString[length] = '\0';
}

int main() {
    char inputString[100], reverseString[100];
    printf("nhap vao chuoi: ");
    fgets(inputString, sizeof(inputString), stdin);
    fflush(stdin);
    daoNguocChuoi(inputString, reverseString);
    printf("chuoi ban dau: %s\n", inputString);
    printf("chuoi dao nguoc: %s\n", reverseString);

    return 0;
}

