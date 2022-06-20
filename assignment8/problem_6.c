#include<stdio.h>

int main(){
    int *p=0;
    int *q=&p;
    int **r=&q;
    **r=10;
    printf("%d", **r);
}
