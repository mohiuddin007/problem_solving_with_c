#include<stdio.h>
void swapValue (int *a, int *b){
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}
int main (){
    int a = 20;
    int b = 10;
    swapValue(&a, &b);
    printf("%d %d", a, b);
}

