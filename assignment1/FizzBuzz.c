//You will be given three numbers AA, BB and CC respectively.
//Determine whether you can construct a sequence 575 by using each of the phrases once, in any order

#include<stdio.h>

int main() {
    int X, Y, N;
    scanf("%i %i %i", &X, &Y, &N);

    for(int i=1; i<=N; i++){
        if(i % X == 0 && i % Y != 0){
            printf("Fizz\n");
        } else if(i % X != 0 && i % Y == 0) {
            printf("Buzz\n");
        } else if(i % X == 0 && i % Y == 0) {
            printf("FizzBuzz\n");
        } else {
            printf("%i\n", i);
        }
    }

    return 0;
}

