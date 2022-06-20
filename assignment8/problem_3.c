#include<stdio.h>
int count_zero(char* bnry_str){
    int count_z = 0;
    for(int i=0; i<strlen(bnry_str); i++){
        if(bnry_str[i] == '0'){
            count_z++;
        }
    }
    return count_z;
}
int main(){
    char str[100];
    scanf("%s", &str);
    int res = count_zero(str);
    printf("%d", res);
}
