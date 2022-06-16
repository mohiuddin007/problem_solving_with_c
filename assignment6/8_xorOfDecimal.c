#include<stdio.h>

int main(){
    int i, r;
    scanf("%d %d", &i, &r);
    int res = i;
    for(int p=i+1; p<=r; p++){
       res = res ^ p;
    }
    printf("%d", res);
}


