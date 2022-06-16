

//Let xyzxyz denote the 33-digit integer whose digits are xx, yy, zz from left to right.
//
//Given a 3-digit integer abcabc none of whose digits is 0, find abc+bca+cababc+bca+cab.

#include<stdio.h>

int main () {
    int num;
    scanf("%d", &num);

    int c = num % 10;
    int b = (num / 10) % 10;
    int a = ((num / 10) / 10) % 10;

    if (a > 0 && b > 0 && c > 00) {
        int firstNum = (a * 100) + (b * 10) + (c * 1);
        int secondNum = (b * 100) + (c * 10) + (a * 1);
        int thirdNum = (c * 100) + (a * 10) + (b * 1);

        int result = firstNum + secondNum + thirdNum;
        printf("%d", result);
    }

}
