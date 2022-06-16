#include<stdio.h>

int main (){
    int a[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    printf("%d\n", &*(a+4));
    printf("%d", &a[0]);
}
