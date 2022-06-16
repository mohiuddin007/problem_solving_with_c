#include<stdio.h>

int main(){
    char str[1000];
    scanf("%s", &str);
    int nums[10] = {0};

    for(int i=0; i<strlen(str); i++){
        int asciiOfIndex = str[i] - '0';
        if(asciiOfIndex < 10){
            nums[asciiOfIndex] += 1;
        }
    }

    for(int i=0; i<10; i++){
        printf("%d ", nums[i]);
    }

}
