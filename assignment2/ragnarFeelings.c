#include<stdio.h>

int main () {
    int n;
    scanf("%d", &n);

    for (int i = 1; i<=n; i++){
        if (i % 2 == 1 && i != n) {
            printf("%s", "I hate that ");
        } else if (i % 2 == 0 && i != n) {
            printf("%s", "I love that ");
        } else if (i % 2 == 0 && i == n) {
            printf("%s", "I love it");
        } else if ((i % 2 == 1) && (i == n)) {
            printf("%s", "I hate it");
        }
    }
}
