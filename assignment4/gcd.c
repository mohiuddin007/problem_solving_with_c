#include<stdio.h>

int gcd (int a, int b){
    while (b>0){
        int temp = a%b;
        a = b;
        b = temp;
    }
    int gcd =a;
    return gcd;

}

int main(){
    int n = 10;
    int arr[10] = {};
    for (int i=0; i<n; i++){
        scanf("%d", &arr[i]);
    }

    int resOfGcd = arr[0];
    for(int i=0; i<n; i++){
        resOfGcd = gcd(resOfGcd, arr[i]);

    }
    printf("%d", resOfGcd);

}
