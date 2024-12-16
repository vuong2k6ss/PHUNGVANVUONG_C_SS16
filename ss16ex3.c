#include <stdio.h>
int sum(int *a, int *b, int *result){
    *result = *a + *b;
}

int main() {
    int a = 5;
    int b = 6;
    int result;
    sum(&a, &b, &result);
    printf("tong hai so a va b la: %d\n", result);
    return 0;
}

