#include<stdio.h>
#include<string.h>

int main(){
    char binaryStr[100];
    scanf("%s", &binaryStr);
    int len = strlen(binaryStr);

    char rem = binaryStr[0];

    int count = 0;
    for(int i=0; i<len; i++){
        if(rem == binaryStr[i]){
            count++;
            rem=binaryStr[i];
            if(count == 7){
                printf("YES");
                break;
            }
        } else {
            count = 1;
            rem=binaryStr[i];
        }
    }
    if(count < 7){
        printf("NO");
    }
}

