
#include<stdio.h>

int main () {
    int a, b;
    scanf("%d %d", &a, &b);
    int res = 0;
    if (a < b) {
        res += (b -a ) + 1;
        printf("%d", res);
    } else {
        printf("%d", res);
    }

}
