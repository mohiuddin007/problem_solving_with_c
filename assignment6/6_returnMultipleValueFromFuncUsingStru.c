#include<stdio.h>
struct pairValue{
    int first;
    int second;
};
//return multiple values from a function using struct
struct pairValue calculate(int a, int b){
    struct pairValue result;
    result.first = a+b;
    result.second = a-b;
    return result;
};
int main(){
    int a = 7, b = 5;
    struct pairValue result = calculate(a, b);

    printf("addition = %d and subtraction = %d\n", result.first, result.second);
}
