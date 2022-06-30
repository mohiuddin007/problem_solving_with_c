#include<stdio.h>
#include<string.h>

int main(){
    char str[1000];
    scanf("%s", &str);

    int allInt[10]={0};
    for(int i=0; i<10; i++){
        for(int j=0; j<strlen(str); j++){
            if(i == (str[j]-'0')){
                allInt[i] = 1;
            }
        }
    }
    int count =0;
    for(int i=0; i<10; i++){
        if(allInt[i] == 1){
            count++;
        } else if(allInt[i] == 0){
            printf("NO");
            return 0;
        }
    }

    if(count == 10){
        printf("YES");
    }

    return 0;
}
