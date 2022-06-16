// Conditional addition of two number

#include<stdio.h>

int main() {
    int a, b;
    scanf("%i %i", &a, &b);

    if(a+b < 10 && a+b > 1){
          printf("%i", a+b);
    } else {
        printf("error");
    }

    return 0;
}
