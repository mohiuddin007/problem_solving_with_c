#include<stdio.h>

int main () {
    int X;
    scanf("%d", &X);

    if (X >= 0 && 40 > X) {
        printf("%d", 40 - X);
    } else if (X >= 40 && 70 > X) {
        printf("%d", 70 - X);
    } else if (X >= 70 && 90 > X) {
        printf("%d", 90 - X);
    } else if (X < 100 && X >= 90) {
        printf("expert");
    } else if (X == 100) {
        printf("expert");
    }
}
