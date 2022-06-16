

#include<stdio.h>

int main () {
    int a, b;
    scanf("%i %i", &a, &b);

    for (int i =1; i<=a; i++) {
        if (i % 2 == 1) {
            for (int j = 1; j<=b; j++) {
                printf("#");
            }
            printf("\n");
        } else {
           if (i % 4 == 0){
                printf("#");
                for (int j = 1; j<b; j++) {
                    printf(".");
                }
                printf("\n");

           } else {
                for (int j = 1; j<b; j++) {
                    printf(".");
                }
                printf("#\n");
           }
        }
    }
}
