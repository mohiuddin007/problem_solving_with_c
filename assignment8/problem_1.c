#include<stdio.h>
float make_sum(float x, float y){
    float z = x+y;
    return z;
}

int main(){
    float a = 10.40;
    float b = 4.44;

    float c = make_sum(a, b);
    printf("%f", c);
}
