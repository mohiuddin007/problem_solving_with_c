
// Watermelon price problem

#include<stdio.h>

int main() {
    int a, b, c;
    scanf("%i %i %i", &a, &b, &c);

    int lowPrice;

    if(a+b < a + c){
        if(a+b < b+c){
          printf("%i", a+b);
        } else {
          printf("%i", b+c);
        }
    } else {
        if (a+c < b+c){
            printf("%i", a+c);
        } else {
            printf("%i", b+c);
        }
    }

    return 0;
}
