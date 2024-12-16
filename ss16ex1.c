#include <stdio.h>

int main()
{
    int a = 5;
    int *ptr = &a;
    printf("gia tri cua a: %d\n", a);
    printf("dia chi cua a: %d\n", &a);
    printf("gia tri cua a qua con tro: %d\n", *ptr);
    printf("dia chi cua a qua con tro: %d\n", ptr);
    return 0;
}

