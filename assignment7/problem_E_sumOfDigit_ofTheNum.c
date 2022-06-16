#include <stdio.h>

int individualSum (num){
    int rem, sum=0;
    while(num != 0){
        rem = num%10;
        sum += rem;
        num /= 10;
    }
    return sum;
}

int main ()
{
    int num, ret;
    scanf("%d",&num);

    ret = individualSum(num);
    printf("%d", ret);
}
