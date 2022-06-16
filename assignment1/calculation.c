//Hasan knew that you are a programmer. He is now going to test your math knowledge. He will give you N numbers of calculations.
//In each calculation you will be given two numbers A and B. You need to calculate the multiplication of these two numbers.
//And after all the calculations you have to tell the total sum of those calculated multiplications.

#include<stdio.h>

int main() {
    int N;
    scanf("%i", &N);

    float sum;
    for(int i=1; i<=N; i++){
        float A, B;
        scanf("%f %f", &A, &B);

        float multi = A * B;
        sum +=multi;
    }
    printf("%f", sum);

    return 0;
}
