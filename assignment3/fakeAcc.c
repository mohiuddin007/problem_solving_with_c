#include<stdio.h>
#include<string.h>

int unique_char(char * str){
    int hash[128] ={0};
    int i, c = 0;
    for(i=0; i<strlen(str); ++i){
        hash[str[i]] =1;
    }
    for(i=0; i<128; ++i){
        c += hash[i];
    }
    return c;
}

int main() {
    char name[100];
    scanf("%s", name);
    int res = unique_char(name);
    if(res%2 == 0) {
        printf("CHAT WITH HER!");
    } else {
        printf("IGNORE HIM!");
    }
}

