#include<stdio.h>
#include<string.h>
int odd_even_hasRtrn_hasParm(int num){
    if(num %2 == 0){
        return 0;
    } else {
        return 1;
    }
}
void odd_even_noRtrn_hasParm(int num){
    if(num %2 == 0){
        printf("no return has Param = %s\n", "Even");
    } else {
        printf("no return has Param = %s\n", "Odd");
    }
}
int odd_even_hasRtrn_noParm(){
    int num;
    scanf("%d", &num);
    if(num %2 == 0){
        return 0;
    } else {
        return 1;
    }
}
void odd_even_noRtrn_noParm(){
    int num;
    scanf("%d", &num);
    if(num %2 == 0){
        printf("no return no Param = %s\n", "Even");
    } else {
        printf("no return no Param = %s\n", "Odd");
    }
}
int main(){
    int number;
    scanf("%d", &number);
    int res1 = odd_even_hasRtrn_hasParm(number);
    printf("has return + has parameter= %s\n", res1 == 0 ? "Even" : "Odd");

    odd_even_noRtrn_hasParm(number);

    int res2 = odd_even_hasRtrn_noParm(number);
    printf("has return + no parameter= %s\n", res2 == 0 ? "Even" : "Odd");

    odd_even_noRtrn_noParm();
}
