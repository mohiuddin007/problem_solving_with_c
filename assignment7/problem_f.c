#include<stdio.h>

int main(){
    int t;
    scanf("%d", &t);

    for(int i=0; i<t; i++){
        int digit;
        scanf("%d", &digit);
        char telNum[digit];
        scanf("%s", &telNum);
        if(digit >= 11){
            int isEightAvailable=0;
            for(int i=0; i<digit; i++){
                if(telNum[i]-'0' == 8){
                    isEightAvailable = 1;
                }
            }
            if(isEightAvailable == 1){
                printf("YES");
            } else {
                printf("NO");
            }
        } else {
            printf("NO");
        }
    }
}
