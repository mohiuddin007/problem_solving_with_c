//You are given three integers A, B and C. Determine whether C is not less than A and not greater than B.

#include<stdio.h>

int main() {
    int a, b, c;
    scanf("%i %i %i", &a, &b, &c);

    if((a < c && b > c) || (a == c && b == c)){
          printf("Yes");
    } else {
        printf("No");
    }

    return 0;
}
