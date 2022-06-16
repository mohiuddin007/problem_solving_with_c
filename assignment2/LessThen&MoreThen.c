#include<stdio.h>

int main() {
    int a, b;
    scanf("%d %d", &a, &b);

    if (a < b) {
        int res = (b - a) + 1;
        printf("%d", res);
    }
}
