//Let xyzxyz denote the 33-digit integer whose digits are xx, yy, zz from left to right.
//
//Given a 3-digit integer abcabc none of whose digits is 0, find abc+bca+cababc+bca+cab.

#include<stdio.h>
#include <string.h>
#include <stdlib.h>

// Function to concatenate
// two integers into one
int concat(int a, int b, int z)
{

    char s1[20];
    char s2[20];
    char s3[20];

    // Convert both the integers to string
    sprintf(s1, "%d", a);
    sprintf(s2, "%d", b);
    sprintf(s3, "%d", z);

    // Concatenate both strings
    strcat(s1, s2);
    strcat(s1, s3);

    // Convert the concatenated string
    // to integer
    int c = atoi(s1);

    // return the formed integer
    return c;
}

int main () {
    int a, b, z;
    scanf("%d %d %d", &a, &b, &z);

    int result = concat(a, b, z) + concat(b, z, a) + concat(z, a, b);
    printf("%d", result);
}
