
#include<stdio.h>

int main () {
    int n;
    scanf("%i", &n);

    int i=1, rooms = 0;
    while(i<=n){
        int a, b;
        scanf("%i %i", &a, &b);

        if (b - a >= 2) {
            rooms ++;
        }
        i++;
    }
    printf("%i", rooms);
}
