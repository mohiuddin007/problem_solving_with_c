#include <stdio.h>
int main(){
    int n;
    long long bin = 0;
    int j,rem, i = 1;
    printf("Enter a decimal number: ");
    scanf("%d", &n);
    for(j=n;j!=0;j)
    {
        rem = j % 2;
        j /= 2;
        bin += rem * i;
        i *= 10;
    }
    printf("%d(decimal) = %lld(binary)",n,bin);
}
